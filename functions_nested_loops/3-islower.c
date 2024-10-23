#include "main.h"
/**
* _islower - Checks if a character is lowercase.
* @c: character to check.
*
* Return: 1 if succes,  0 if iherwise.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
