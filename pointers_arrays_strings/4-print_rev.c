#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int length = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (n = (length - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
