#include "variadic_functions.h"

/**
* print_strings - a variadic function that prints all its
*  char arguments
*
* @n: number of arguments
* @separator: separator charachter
*
* Return: nothing
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{

		unsigned int i;
		va_list my_arguments;
		char *arg;

		va_start(my_arguments, n);


		for (i = 0; i < n; i++)
		{
			arg = va_arg(my_arguments, char*);
			if (arg == NULL)
				printf("(nil)");
			else
				printf("%s", arg);


			if (separator != NULL && i != n - 1)
				printf("%s", separator);

		}
		va_end(my_arguments);
		printf("\n");
	}
}
