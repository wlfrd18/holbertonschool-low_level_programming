#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 if succes
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');

	return (0);
}

