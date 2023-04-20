#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC


/* headers */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/* prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);



#endif
