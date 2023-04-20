#include "variadic_functions.h"

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

	if (n != 0)
	{

		unsigned int i;
		va_list my_arguments;


		va_start(my_arguments, n);


		for (i = 0; i < n; i++)
		{
			int arg = va_arg(my_arguments, int);

			printf("%d", arg);

			if (separator != NULL && i != n - 1)
				printf("%s", separator);

		}
		va_end(my_arguments);
		printf("\n");
	}
}
