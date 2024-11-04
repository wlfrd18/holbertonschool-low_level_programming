#include "main.h"
/**
* _strchr - locates a charater in a string.
* @s: pointer to a string.
* @c: character to check.
* Return: a pointer to c if its found, and NUll otherwisse.
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
