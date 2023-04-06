#include "main.h"

/** By -{adilma53}- */

/**
* _strlen_recursion - claculate length of string
*
* @s: input
*
* Return: length of string
*
*/

int _strlen_recursion(char *s)
{

if (*s == 0)
{
return (0);
}
else
return (1 + _strlen_recursion(s + 1));
}

/** By -{adilma53}- */

/**
* check_palindrome - checks if string is palindrome
*
* @s: input
* @start: input
* @end: input
*
* Return: 1 if palindrome and 0 if not.
*/

int check_palindrome(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
else if (s[start] != s[end])
{
return (0);
}
else
{
return (check_palindrome(s, start + 1, end - 1));
}
}

/** By -{adilma53}- */

/**
* is_palindrome - checks if a string is palindrome
*
* @s: input
*
* Return: 1 if palindrome and 0 if not.
*/

int is_palindrome(char *s)
{
int length = _strlen_recursion(s);

if (length <= 1)
{
return (1);
}
else
{
return (check_palindrome(s, 0, length - 1));
}
}
