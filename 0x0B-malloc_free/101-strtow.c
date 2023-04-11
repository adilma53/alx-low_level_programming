#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* by adilma53 */

/**
* strtow - this function takes a string and convert it
*   into a 2d array of strings
*
* @str: string to convert
*
* Return: the 2d array
*/

char **strtow(char *str)
{
    int i, j, wrdcount = 0, chartotal = 0, k = 0;
    char **matrix;

    if (str == NULL || *str == '\0')
        return (NULL);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ')
            wrdcount++;
        chartotal++;
    }
    matrix = malloc((wrdcount + 1) * sizeof(char *));
    if (matrix == NULL)
        return (NULL);
    /* PUTTING EVERY STRING IN ITS ARRAY TERMINATED WITH '\0' */
    for (i = 0; i < wrdcount; i++)
    {
        matrix[i] = malloc(chartotal * sizeof(char));
        if (matrix[i] == NULL)
        {
            /* Free allocated memory if error occurs */
            for (j = 0; j < i; j++)
            {
                free(matrix[j]);
            }
            free(matrix);
            return (NULL);
        }
        for (j = 0; str[k + i] != ' ' && str[k + i] != '\0'; j++)
        {
            matrix[i][j] = str[k + i];
            k++;
        }
        matrix[i][j] = '\0';
    }
    matrix[wrdcount] = NULL;
    return (matrix);
}
