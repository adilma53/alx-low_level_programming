#include <stdio.h>
#include <stdlib.h>


/* by adilma53 */




/**
 * main - this programm program prints the multiplication
 *	of argv[1] x argv[2]
 *
 * @argc: original pointer
 * @argv: original size
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arv1 = 0, arv2 = 0, mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	arv1 = atoi(argv[1]);
	arv2 = atoi(argv[2]);

	mul = arv1 * arv2;

	printf("%d\n", mul);

	return (0);
}
