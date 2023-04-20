#include "variadic_functions.h"


/* by adilma53 */
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
	va_list arg_list;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(arg_list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_list, int));

		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(arg_list);
}

