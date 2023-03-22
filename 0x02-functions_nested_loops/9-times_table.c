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
        _putchar('0');

        for (i = 1; i <= 9; i++)
        {
            _putchar(',');
            _putchar(' ');

            product = j * i;

            if (product <= 9)
                _putchar(' ');
            else
                _putchar((product / 10) + '0');

            _putchar((product % 10) + '0');
        }
        _putchar('\n');
    }
}
