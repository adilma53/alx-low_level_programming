#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 *
 * @s: the operator
 *
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};

	int i = 5;
	int j = 0;

	while (i--)
	{
		if (strcmp(s, ops[j].op) == 0)
			return (ops[j].f);

		j++;
	}

	return (0);
}
