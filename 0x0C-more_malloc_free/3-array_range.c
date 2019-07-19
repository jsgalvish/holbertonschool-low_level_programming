#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *array_range - Fuction
 * @min: int
 * @max: int
 * Return: *int
**/

int *array_range(int min, int max)
{
	int *p, sum, i;

	sum = (max - min + 1);
	if (min > max)
		return (NULL);
	p = malloc(sum * sizeof(int));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < sum; i++)
	{
		p[i] = min;
		min++;
	}

	return (p);
}
