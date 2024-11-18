#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - Entry point
* @array: array in which we search.
* @size: size of the array.
* @cmp: pointer to a function.
* Return: -1 or an index of they array
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
