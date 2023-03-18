#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - print all alphabets upper and lowecase
  *
  * Return: 0 if success
  */

int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int size = sizeof(str) / sizeof(str[0]);

	int i;

	for (i = size - 1; i >= 0 ; i--)
	{
		putchar(str[i]);
	}

	putchar('\n');

	return (0);
}

