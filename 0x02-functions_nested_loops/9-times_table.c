// #include "main.h"
#include <stdio.h>

/**
* add - prints multiplication table
*
* Return: nada
*/

int main()
// void times_table(void)
{
    int j, i, product;

    for (j = 0; j <= 9; j++)
    {
        putchar('0');

        for (i = 1; i <= 9; i++)
        {


            product = j * i;

            if (product > 9 )
            {

                putchar(' ');
                putchar((product / 10) + '0');
                putchar((product % 10) + '0');

            }

            else if (product < 10)
            {

                putchar(' ');
                putchar(' ');
                putchar(product + '0');

            }

            if (i != 9)
            {
                putchar(',');
            }
        }
        putchar('\n');

    }

}
