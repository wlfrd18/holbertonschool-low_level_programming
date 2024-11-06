#include <stdio.h>
#include "main.h"

/**
* _puts_recursion: Entry point.
* @s: string to print.
* Return: 0 if succes.
*/
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
		_putchar('\n');
}
