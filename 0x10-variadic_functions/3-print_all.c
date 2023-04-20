#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	char *str;
	unsigned int i = 0;
	char *separator = "";

	va_start(arguments, format);

	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
		case 'i':
			printf("%s%d", separator, va_arg(arguments, int));
			break;
		case 's':
			str = va_arg(arguments, char *);
			if (str != NULL)
				printf("%s%s", separator, str);
			else
				printf("%s(nil)", separator);
			break;
		case 'f':
			printf("%s%f", separator, va_arg(arguments, double));
			break;
		case 'c':
			printf("%s%c", separator, va_arg(arguments, int));
			break;
		default:
			i++;
			continue;
		}

		separator = ", ";

		i++;
	}

	va_end(arguments);
	printf("\n");
}
