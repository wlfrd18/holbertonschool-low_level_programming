#include "main.h"
/*
*_islower - Entry point
* function that checks for lowercase character
* Return: 0 if succes
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
