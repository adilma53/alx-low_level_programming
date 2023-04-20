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
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
