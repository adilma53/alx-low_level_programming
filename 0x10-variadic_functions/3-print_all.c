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

	if (format == NULL)
		return;

	va_start(my_args, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 's':
			string = va_arg(my_args, char*);
			if (string == NULL)
				printf("(nil)");
			else
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
			break;
		}

		if (format[i + 1] != '\0' && (format[i] == 's' || format[i] == 'f' ||
						format[i] == 'c' || format[i] == 'i'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(my_args);
}
