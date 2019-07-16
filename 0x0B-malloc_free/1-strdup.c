#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - Return pointer to a new string which is a duplicate of the string
 *
 * @str:  specific char
 *
 * Return: Nothing.
 *
**/

char *_strdup(char *str)
{
	char *array;
	int m, k;

	if (str == 0)
	{
		return (NULL);
	}

	m = 0;
	while (str[m])
	{
		m++;
	}

	array = malloc((m + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	k = 0;
	while (k < m)
	{
		array[k] = str[k];
		k++;
	}
	return (array);
}
