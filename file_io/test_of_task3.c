/*
 * File: 3-cp.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		char error_msg[] = "Error: Can't write to ";
		write(STDERR_FILENO, error_msg, sizeof(error_msg) - 1);
		write(STDERR_FILENO, file, strlen(file));
		write(STDERR_FILENO, "\n", 1);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		char error_msg[] = "Error: Can't close fd ";
		write(STDERR_FILENO, error_msg, sizeof(error_msg) - 1);
		char fd_str[20];
		sprintf(fd_str, "%d", fd);  // Convert fd to string
		write(STDERR_FILENO, fd_str, strlen(fd_str));
		write(STDERR_FILENO, "\n", 1);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		char usage_msg[] = "Usage: cp file_from file_to\n";
		write(STDERR_FILENO, usage_msg, sizeof(usage_msg) - 1);
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			char error_msg[] = "Error: Can't read from file ";
			write(STDERR_FILENO, error_msg, sizeof(error_msg) - 1);
			write(STDERR_FILENO, argv[1], strlen(argv[1]));
			write(STDERR_FILENO, "\n", 1);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			char error_msg[] = "Error: Can't write to file ";
			write(STDERR_FILENO, error_msg, sizeof(error_msg) - 1);
			write(STDERR_FILENO, argv[2], strlen(argv[2]));
			write(STDERR_FILENO, "\n", 1);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
