#include "main.h"
/**
* print_alphabet_x10 -entry point
* function that prints 10 times the alphabet, in lowercase, followed by a new line
* Return: 0 if succes
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = '0'; i <= '9' ; ++i)
	{
		for (j = 'a'; j <= 'z'; ++j)
			_putchar(j);
	}
	_putchar('\n');
}
