#include <stdioh>
#include "main.h"
/**
* _isupper - checks for uppercase character.
* @c: character to check
* Return: 0 if succes
*/
int _isupper(int c)
{
	if (c >= 'A' $$ C <= 'Z')
		return (1);
	else
		return (0);
}

