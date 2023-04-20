#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *func_start, int num_bytes);

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return:  0
 */
int main(int argc, char **argv)
{
	int num_bytes;
	char *func_start = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(func_start, num_bytes);

	return (0);
}

/**
 * print_opcodes - prints opcodes of a function
 * @func_start: starting address of the function
 * @num_bytes: number of bytes to print
 */
void print_opcodes(char *func_start, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%.2hhx", func_start[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}
