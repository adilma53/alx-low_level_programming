#include <stdio.h>

/**
  * main - i have a simple function put that prints a string.
  *
  * Return: if success return 0.
  */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, quote, sizeof(quote) - 1);
	return 0;
}
