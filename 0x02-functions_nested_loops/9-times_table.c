#include "main.h"

/**
* add - prints multiplication table
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

            if (product > 9 )


            {

                _putchar(' ');
                _putchar((product / 10) + '0');
                _putchar((product % 10) + '0');

            }

            else if (product < 10)
                // && i != 0 && j != 0
            {

                _putchar(' ');
                _putchar(' ');
                _putchar(product + '0');

            }

            if (i != 9)
            {
                _putchar(',');
            }
        }
        _putchar('\n');

    }

}
