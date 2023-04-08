#include <stdio.h>
#include <stdlib.h>

/**
* count_change - finding how many change coins recursively
*
* @change: change needed
* @counter: dominations counnter
*
* Return: counter
*
*/
int count_change(int change, int counter);


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
if (argc != 2)
{
printf("Error\n");
return (1);
}

int change = atoi(argv[1]);
int counter = 0;

if (change < 0)
{
printf("0\n");
return (0);
}


else
{

count_change(change, counter);
}





return (0);
}





int count_change(int change, int counter)
{

if (change == 0)
{
printf("%d\n", counter);
return (0);
}


if (change >= 25)
return (count_change(change - 25, counter + 1));

else if (change >= 10)
return (count_change(change - 10, counter + 1));

else if (change >= 5)
return (count_change(change - 5, counter + 1));

else if (change >= 2)
return (count_change(change - 2, counter + 1));

else if (change == 1)
return (count_change(change - 1, counter + 1));

}
