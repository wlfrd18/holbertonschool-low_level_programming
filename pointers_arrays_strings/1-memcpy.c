#include "main.h"
/**
* _memcpy - copies memory area.
* @dest: pointer to a destination.
* @src: pointer to the source.
* @n: number of byte to copy.
* Return: pointer to a dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src [i];
	}

	return (dest);
}
