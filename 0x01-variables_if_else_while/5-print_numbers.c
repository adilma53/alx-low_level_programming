#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/**
  * main - print from 0 to 9
  *
  * Return: 0 if success
  */

int main(void)
{
	int digit = 0;
	while (true)
	{
		printf("%d", digit);
		if (digit == 9)
			break;

		digit++;
	}
	printf("\n");
	return (0);
}
