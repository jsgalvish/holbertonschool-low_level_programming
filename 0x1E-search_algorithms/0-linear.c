 #include "search_algos.h"

/**
 * linear_search - linear_search
 * @array: array
 * @size: size
 * @value: value to search for
 * Return: index of array where value is found, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
