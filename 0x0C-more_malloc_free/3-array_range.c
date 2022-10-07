#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
    int *p;
    int i, size;

    if (min > max)
        return (NULL);
    size = max - min + 1;
    p = malloc(sizeof(int) * size);
    if (p == NULL)
        return (NULL);
    for (i = 0; i < size; i++)
        p[i] = min + i;
    return (p);
}

