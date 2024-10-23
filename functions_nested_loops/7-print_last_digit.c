#include <stdio.h>
#include "main.h"
/**
* print_last_digit - prints last digit of a number
* @n: number to check
*
* Return: 0 if succes
*/
int print_last_digit(int n)
{
	int r = n % 10

	if ( r < 0)
		r *= -1;
	_putchar(r + '0');

	return (r);
}
