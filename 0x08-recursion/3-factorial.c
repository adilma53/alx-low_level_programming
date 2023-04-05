#include <stdio.h>
#include "main.h"

/**
* factorial - claculate length of string
*
* @n: input
*
* Return: factorial
*
*/

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
