#include "3-calc.h"

/**
 * get_op_func - selects the correct operation
 * @s: operator
 *
 * Return: a pointer to the operation function or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	static op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (int i = 0; ops[i].op != NULL; i++)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
	}

	return (NULL);
}
