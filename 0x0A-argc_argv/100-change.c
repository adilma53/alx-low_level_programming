whats the difference between my code (dont see recursive aproach i mean whats the difrence between how the two programms work and outputs) :

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
int count_change(int change, int counter)
{

if (change <= 0)
return (counter);


if (change >= 25)
return (count_change(change - 25, counter + 1));

else if (change >= 10)
return (count_change(change - 10, counter + 1));

else if (change >= 5)
return (count_change(change - 5, counter + 1));

else if (change >= 2)
return (count_change(change - 2, counter + 1));

else
return (count_change(change - 1, counter + 1));

}

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

int change = atoi(argv[1]);
int counter = 0;



if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
int result = count_change(change, counter);
printf("%d\n", result);
}


return (0);
}





and this code:

#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the minimum number of coins to make change
* for an amount of money
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 1 if there is an error; else returns 0
*/

int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
cents = atoi(argv[1]);
while (cents > 0)
{
	coins++;
	if ((cents - 25) >= 0)
	{
		cents -= 25;
		continue;
	}
	if ((cents - 10) >= 0)
	{
		cents -= 10;
		continue;
	}
	if ((cents - 5) >= 0)
	{
		cents -= 5;
		continue;
	}
	if ((cents - 2) >= 0)
	{
		cents -= 2;
		continue;
	}
	cents--;
}
printf("%d\n", coins);
return (0);
}

