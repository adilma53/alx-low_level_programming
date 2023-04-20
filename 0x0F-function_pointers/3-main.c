#include "3-calc.h"

/**
 * main - perform operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on incorrect, 99 on invalid operator,
 * 100 on division by 0
 */

int main(int argc, char *argv[])
{
	/* function that takes a string argument (an operator) */
	int (*calcu)(int, int);



	/* check if the number of arguments is correct */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	/* call get_op_func with the operator passed as an argument */
	calcu = get_op_func(argv[2]);


	/* check if the operator is valid */
	if (calcu == 0)
	{
		printf("Error\n");
		exit(99);
	}


	printf("%d\n", calcu(atoi(argv[1]), atoi(argv[3])));


	return (0);
}
