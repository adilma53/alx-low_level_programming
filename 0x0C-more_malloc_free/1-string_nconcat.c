#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/** By -{adilma53}- */

/**
* string_length - calculate string length
*
* @str: input
*
* Return: length
*
*/


unsigned int string_length(char *str)
{
    int i = 0;
    unsigned int length = 0;

    while (str[i])
    {
        length++;
        i++;
    }
    return (length);
}

/** By -{adilma53}- */

/**
* string_nconcat - this function concatenates s1 and s2.
* passed to the program.
*
* @s1: input
* @s2: input
* @n: input
*
*
* Return: newstring
*
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *newstring;
    unsigned int i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";


    unsigned int s1_len = string_length(s1);


    newstring = malloc((s1_len + n + 1) * sizeof(char));
    if (newstring == NULL)
        return (NULL);


    for (i = 0; i < s1_len; i++)
    {
        newstring[i] = s1[i];

        if (i == s1_len - 1)
        {
            for (j = 0; j < n && s2[j] != '\n' ; j++)
                newstring[i + j] = s2[j];
        }
    }

    newstring[i + j] = '\0';

    return (newstring);
}

