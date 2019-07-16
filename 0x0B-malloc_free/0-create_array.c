#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - create array of chars, initializes it with a specific char
 *
 * @c:  specific char
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int x;

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	x = 0;
	while ((unsigned int)x < size)
	{
		array[x] = c;
		x++;
	}
	return (array);
}
