#include "main.h"


/**
* add - return sum
*
* Return: 0
*/

int add(int a, int b)
{



        int sum = a + b;
        if (sum > 9)

        {
                return (_putchar((sum / 10) + '0'));
                return (_putchar((sum % 10) + '0'));
        }

        else
        {
                return (_putchar(sum + '0'));
        }


}
