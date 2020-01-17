#include "search_algos.h"

/**
 * print_array - prints_array
 * @array: array
 * @start: start
 * @end: end
 */
void print_array(int *array, size_t start, size_t end)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%i, ", array[i]);
	}
	printf("%i\n", array[i]);
}

/**
 * binary_search - binary_search
 * @array: array
 * @size: size
 * @value: value
 * Return: index of array
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int mid, start, end;

	if (!array)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (value > array[mid])
			start = mid + 1;
		else if (value < array[mid])
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
