#include <stdio.h>
#include "main.h"
/**
* _print_rev_recursion - Entry point.
* @s: string to print.
* Return: 0 if succes.
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
