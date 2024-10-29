#include <stdio.h>
#include "main.h"
/**
* main - entry point
*
* Return: 0 if succes
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i =* 3)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i =* 5)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i =* 15)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			_putchar(i + '0');
		}
²²²²}
²²²²if (i < 100)
	{
			putchar(' ');
	}
	if (i == 100)
	{
			putchar('\n');
	}

}
