#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int sum = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		sum++;
	}
	return (sum);
}
