#include <stdio.h>
/**
* main - Entry point
* Return: 0 if succes
*/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; ++n)
		printf("%i", n);

	putchar('\n');

	return (0);
}
