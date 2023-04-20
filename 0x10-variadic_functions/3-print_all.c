#include "variadic_functions.h"

/**
 * print_all - a variadic function that prints all its arguments
 * based on what their specifier
 *
 * @format: format string
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list my_args;
	char *string;
	char *separator = ", ";

	va_start(my_args, format);

	if (format == NULL)
		return;

	while (format[i])
	{
		switch (format[i])
		{
		case 's':
			string = va_arg(my_args, char*);
			if (string == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, string);
			break;
		case 'f':
			printf("%s%f", separator, va_arg(my_args, double));
			break;
		case 'c':
			printf("%s%c", separator, va_arg(my_args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(my_args, int));
			break;
		default:
			break;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(my_args);
}
