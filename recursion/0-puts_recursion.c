#include <stdio.h>
#include "main.h"

/**
* _puts_recursion: prints a string.
* @s: string to print.
* Return: 0 if succes.
*/
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
