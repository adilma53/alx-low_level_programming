#include "main.h"

/**
* jack_bauer - prints 24 hour
*
* Return: nada
*/


void jack_bauer(void)
{

    int j = 0;
    int i = 0;

    for (j <= 23; j++)
    {
        for (i <= 59; i++)

        {
            _putchar(j / 10 + '0');
            _putchar(j % 10 + '0');
            _putchar(':');
            _putchar(i / 10 + '0');
            _putchar(i % 10 + '0');
            _putchar('\n');
        }


    }




}
