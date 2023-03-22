#include "main.h"


/**
* times_table - prints multiplication table
*
* Return: nada
*/

void times_table(void)
{
    int j, i, product;

    for (j = 0; j <= 9; j++)
    {
        for (i = 0; i <= 9; i++)
        {

            product = j * i;
            if (product > 9)

            {
                putchar((product / 10) + '0');
                putchar((product % 10) + '0');
            }

            else
            {
                putchar(product + '0');
            }

            putchar(',');
            putchar(' ');

        }
        putchar('\n');

    }

}
