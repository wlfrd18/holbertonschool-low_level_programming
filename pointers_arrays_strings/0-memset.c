#include "main.h"

/**
* _memset - fills memory with a constant byte.
* @s: pointer to the memory to fills
* @b: constant character
* @n: number of octet to fills
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
