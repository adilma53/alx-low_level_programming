#include "main.h"

/**
* jack_bauer - prints 24 hour
*
* Return: nada
*/


void jack_bauer(void)
{

    for (int j = 0; j <= 23; j++)
    {
        for (int i = 0; i <= 59; i++)

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
