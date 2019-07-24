#include <stddef.h>
#include "function_pointers.h"
/**
* array_iterator - pass a array to a function
* @array: list of int
* @size: lenght of array
* @action: function to call
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size > 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
