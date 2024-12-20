#ifndef CALC_H_
#define CALC_H_

/*
 * File: 3-calc.h
 * Auth: Guele T Wilfried P
 * Desc: Header file containing all structures and
 *       prototypes used by the 3-main.c program.
 */

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
