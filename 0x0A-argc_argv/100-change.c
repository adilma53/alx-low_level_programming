#include <stdio.h>
#include <stdlib.h>

/** By -{adilma53}- */

/**
* main - check a program that prints the minimum number
* of coins to make change.
*
* @argc: argument count.
* @argv: arguments vector.
*
* Return: success 0 / fail 1
*
*/

int main(int argc, char *argv[])
{
int change, counter = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
change = atoi(argv[1]);
if (change < 0)
printf("0\n");
while (change > 0)
{
counter++;

if (change >= 25)
{
change -= 25;
continue;
}
if (change < 25 && change >= 10)
{
change -= 10;
continue;
}
if (change < 10 && change >= 5)
{
change -= 5;
continue;
}
if (change < 5 && change >= 2)
{
change -= 2;
continue;
}
if (change == 1)
{
change -= 1;
}
}
printf("%d\n", counter);
return (0);
}
