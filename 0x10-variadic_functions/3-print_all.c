#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* _seperator - trick -_0
*
* @format: format string
* @i: _________
* Return: nothing
*/

void _seperator(const char * const format, unsigned int i)
{
	if (format[i] != '\0')
		printf(", ");
}


/**
* print_all - a variadic function that prints all its arguments
* based on what thier specifier
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
				printf("(nil)");
			printf("%s", string);
			break;

		case 'f':
			printf("%f", va_arg(my_args, double));
			break;

		case 'c':
			printf("%c", va_arg(my_args, int));
			break;

		case 'i':
			printf("%d", va_arg(my_args, int));
			break;

		default:
			i++;
			continue;
		}
		i++;
		_seperator(format, i);
	}
	printf("\n");
	va_end(my_args);
}
