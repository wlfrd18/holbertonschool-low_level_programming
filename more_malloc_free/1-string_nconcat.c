#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Entry point.
 * @s1: first string.
 * @s2: second string.
 * Return: NULL or a pointer.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, i, j;
	char *concat_str;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	if (n >= len_s2)
	{
		n = len_s2;
	}
	concat_str = malloc(sizeof(char) * (len_s1 + n + 1));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concat_str[i + j] = s2[j];
	}
	concat_str[i + j] = '\0';
	return (concat_str);
}
