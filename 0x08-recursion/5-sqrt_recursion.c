#include "main.h"

/** By -{adilma53}- */

/**
* find_sqrt - this function find the square root of n.
*
<<<<<<< HEAD
* @x: input
* @z: input
=======
* @a: input
* @b: input
>>>>>>> 5604e370a1ffeff9611f462906d9cf765c1a3cfa
*
* Return: squar root of z or -1.
*/


int find_sqrt(int x, int z)
{

if (x * x == z)
{
return (x);
}
else if (x > z / 2)
{
return (-1);
}
else
{
return (find_sqrt(1 + x, z));
}
}
<<<<<<< HEAD
=======

/** By -{adilma53}- */

/**
* _sqrt_recursion - this function si the main working function and it returns
*   find_sqrt results
*
* @n: input
*
* Return: squar root or -1.
*/
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
else
{
return (find_sqrt(1, n));
}
}
>>>>>>> 5604e370a1ffeff9611f462906d9cf765c1a3cfa
