#include <stdio.h>

/**
  * main - print all alphabets upper and lowecase
  *
  * Return: 0 if success
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	char c;

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
