#include "main.h"

/**
 * main - prints _putchar.
 *
 * Return: always 0.
 */

int main(void)
{

	char arr[] = "_putchar";
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < size - 1; i++)
	{
		_putchar(arr[i]);
	}

	_putchar('\n');

	return (0);
}
