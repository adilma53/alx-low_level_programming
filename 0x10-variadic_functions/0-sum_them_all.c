#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - a variadic function that sums all
* arguments passed to it
*
* @n: number of arguments
*
* Return: sum if succeed / 0 if failed
*/


int sum_them_all(const unsigned int n, ...)
{

	if (n != 0)
	{
		int sum = 0;
		unsigned int i;

		va_list my_argument;


		va_start(my_argument, n);


		for (i = 0; i < n; i++)
		{
			int arg = va_arg(my_argument, int);

			sum += arg;
		}
		va_end(my_argument);

		return (sum);
	}
	else
		return (0)
	}
