#include "3-calc.h"

/**
 * op_add - adds
 * @a: input
 * @b: the second integer
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
        return (a + b);
}

/**
 * op_sub - subtracts
 * @a: input
 * @b: input
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: input
 * @b: input
 *
 * Return: the product
 */
int op_mul(int a, int b)
{
        return (a * b);
}

/**
 * op_div - divides
 * @a: input
 * @b: input
 *
 * Return: the result division
 */
int op_div(int a, int b)
{
        if (b == 0)
        {
                printf("Error\n");
                exit(-1);
        }

        return (a / b);
}

/**
 * op_mod - remainder
 * @a: input
 * @b: input
 *
 * Return: the remainder of dividing a by b
 */
int op_mod(int a, int b)
{
        if (b == 0)
        {
                printf("Error\n");
                exit(-1);
        }

        return (a % b);
}
