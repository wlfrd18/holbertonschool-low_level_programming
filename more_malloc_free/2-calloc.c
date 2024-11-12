#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Entry point.
 * @nmemb: number of elements.
 * @size: size of one element.
 * Return: NULL or a pointer.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = '\0';
	}
	return ptr;
}
