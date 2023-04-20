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

	int i = 0;

	while (i <= 4)
	{
		if (s == ops[i].op)
			return (ops[i].f);


		i++;
	}

	return (0);
}
