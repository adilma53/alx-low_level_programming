#include "main.h"
/**
*print_diagonal - prints multiple \\ diagonal
*@n: input
*Return:nada
*/
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)

_putchar(' ');

_putchar('\\');

if (i == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
