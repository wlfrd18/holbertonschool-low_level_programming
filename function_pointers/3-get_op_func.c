#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: the operator passed as a string
 * Return: pointer or null.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
		{
		return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
