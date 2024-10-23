#include "main.h"
/*
*_isalpha - check if is a letter
*
* Return: 1 if succes, 0 if otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
