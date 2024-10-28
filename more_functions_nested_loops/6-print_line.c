#include <stdio.h>
#include "main.h"
/**
* print_line - draws a straight line in the terminal
* @n: number of times of the character
* Return: 0 always
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	if (i <= 0)
		_putchar('_');
}
