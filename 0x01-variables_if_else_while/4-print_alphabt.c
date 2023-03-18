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
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != 'e' && str[i] != 'q')
		{
			putchar(str[i]);
		}
		i++;
	}

	putchar('\n');

	return (0);
}
