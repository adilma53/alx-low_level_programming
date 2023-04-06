#include "main.h"

/** By -{adilma53}- */

/**
* find_sqrt - this function find the square root of n.
*
* @x: input
* @z: input
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
