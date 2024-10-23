#include "main.h"
/**
* _isalpha - check if is a letter
* @c: character to check
* Return: 1 if succes, 0 if otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
