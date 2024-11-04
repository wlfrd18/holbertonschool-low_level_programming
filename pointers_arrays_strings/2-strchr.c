#include "main.h"
#include <stdio.h>
/**
* _strchr - locates a charater in a string.
* @s: pointer to a string.
* @c: character to check.
* Return: 0 if succes.
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
