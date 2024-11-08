#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * atoi is a function that converts a string into an int
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int a, b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (argc != 3)
	{
                printf("%s\n", "Error");
                return (1);
	}
	else
		printf("%d\n", (a * b));
	return (0);
}
