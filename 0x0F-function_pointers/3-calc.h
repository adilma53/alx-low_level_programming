#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct op - Struct
 *
 * @op: operator
 * @f: function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* MY PROTOTYPES */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
