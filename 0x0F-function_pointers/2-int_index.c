#include <stddef.h>
#include "function_pointers.h"
/**
* int_index - compare array with a function and return in base function
* @array: array of int
* @size: size of array
* @cmp: function to compare
* Return: index or -1
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
