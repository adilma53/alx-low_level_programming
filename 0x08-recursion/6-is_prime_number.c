#include "main.h"

/** By -{adilma53}- */

/**
* prime - this function look if number is prime.
*
* @x: input
* @y: input
*
* Return: 1 if prime 0 if not.
*/


int prime(int x, int y)
{

if (y == 1)
{
return (1);
}
else if (x % y == 0)
{
return (0);
}
else
{
return (prime(x, y - 1));
}

}

/** By -{adilma53}- */

/**
* is_prime_number - returns 0 if not prime 1 if prime.
*
* @n: input
*
* Return: 1 if prime 0 if not.
*/

int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
else
{
return (prime(n, n / 2));
}
}
