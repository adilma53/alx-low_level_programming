#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - a variadic function that prints all its arguments
*
* @n: number of arguments
* @separator: separator charachter
*
* Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n > 0)
	{
		unsigned int i;
		va_list my_arguments;
		char *my_separator;

		if (separator == NULL || separator[0] == 0)
			my_separator = "";
		else
			my_separator = separator;

		va_start(my_arguments, n);

		for (i = 0; i < n; i++)
		{
			int arg = va_arg(my_arguments, int);

			printf("%d", arg);

			if (i != n - 1)
				printf("%s", my_separator);
		}

		va_end(my_arguments);
	}

	printf("\n");
}

