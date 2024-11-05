#include <stdio.h>
#include "main.h"

/**
* _strstr - entry point.
* @haystack: string.
* @needle: substring.
* Return: 0 if succes.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, n;

	if (*needle == '\0')
		return haystack;
	for (i = 0; haystack[i] != 0; i++)
	{
		for (n = 0; needle[n] != 0 && haystack[i + n] == needle[n]; n++)
		{
		}
		if (needle[n] == '\0')
			return haystack;
	}
	return (NULL);
}
