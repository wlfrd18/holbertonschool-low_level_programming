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
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%i", i);
		}
	if (i < 100)
	{
		printf(" ");
	}
	if (i == 100)
	{
		printf("\n");
	}
	}
	Return (0);
}
