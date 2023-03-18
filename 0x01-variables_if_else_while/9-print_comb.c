#include <stdio.h>

/**
  * main - print all alphabets upper and lowecase
  *
  * Return: 0 if success
  */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}


	putchar('\n');

	return (0);
}
