#include <s:tdio.h>
#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, total1 = 0, total2 = 0;


	for (i = 0; i < size; i++)
	{
		total1 = total1 + a[i * size + i];
	}
	for (i = 0; i < size; i++)
	{
		total2 = total2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", total1, total2);
}
