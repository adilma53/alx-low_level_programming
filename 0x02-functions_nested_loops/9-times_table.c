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
                _putchar(48);

                for (i = 1; i <= 9; i++)
                {
                        _putchar(',');
                        _putchar(' ');

                        product = j * i;

                        if (product <= 9)

                        {

                                _putchar(' ');
                        }

                        else
                        {

                                _putchar((product / 10) + 48);
                                _putchar((product % 10) + 48);
                        }


                }
                _putchar('\n');

        }

}
