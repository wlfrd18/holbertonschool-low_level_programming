#include <stdio.h>
#include "main.h"
/**
* _abs - computes absolute value of an integer
* @n: integer to check
*
* Return: 0 if succes
*/
int _abs(int)
{
	int n;

	if (n >= 0)
		return (n);
	else
		return (-n);
}
