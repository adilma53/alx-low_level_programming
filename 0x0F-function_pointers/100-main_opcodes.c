#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *func_start, int num_bytes);

/**
 * main - _
 * @argc: arguments
 * @argv: argument array
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int num_bytes;
	char *func_start = (char *)main;
	/* check if the number of arguments is correct */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* convert the argument to an integer */
	num_bytes = atoi(argv[1]);
	/* check if the number of bytes is negative */
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	/* print the opcodes of the main function */
	print_opcodes(func_start, num_bytes);

	return (0);
}

/**
 * print_opcodes - prints opcodes
 * @func_start: address of the function
 * @num_bytes: number of bytes
 */
void print_opcodes(char *func_start, int num_bytes)
{
	int i;
	/* print the opcodes in hexadecimal format, separated by spaces */
	for (i = 0; i < num_bytes; i++)
	{
		printf("%.2hhx", func_start[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}
