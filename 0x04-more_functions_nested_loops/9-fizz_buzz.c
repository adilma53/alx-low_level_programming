#include <stdio.h>

/**
* main - classic fizz buzz program
*
* Return: 0
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
if (i > 9)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
}
else
{
putchar(i + '0');
}
}
putchar(' ');
}

putchar('\n');
return (0);
}
