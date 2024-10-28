#include <stdio.h>
#include "main.h"
/**
* more_numbers - prints 10 times the numbers from 0 to 14.
*
* Return: always 0.
*/

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		k = j / 10
		l = j % 10
		{
			if ( j >= 0 && j <= 9)
				_putchar(j + '0');
			else
				_putchar(k + '0');
				_putchar(l + '0');
		}
		_putchar('\n');
	}
}
