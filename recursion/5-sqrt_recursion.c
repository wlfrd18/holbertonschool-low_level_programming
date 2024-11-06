#include <stdio.h>
#include "main.h"

/**
* _sqrt_recursion_checker - Entry point.
* @n: input.
* @a: character checker.
* Return: 0 if succes.
*/

int _sqrt_recursion_checker(int n, int a)
{
	if (a * a == n)
		return (a);
	if (a * a > n)
		return (-1);
	return (_sqrt_recursion_checker(n, a + 1));
}

/**
* _sqrt_recursion - Entry point.
* @n: input.
* Return: 0 if succes.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_checker(n, 0));
}
