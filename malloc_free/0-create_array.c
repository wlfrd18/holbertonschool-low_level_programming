#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* create_array - Entry point.
* @size: size of the array.
* @c: input
* Return: 0 or NULL.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
