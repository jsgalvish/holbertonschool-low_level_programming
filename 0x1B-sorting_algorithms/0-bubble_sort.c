#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: input array
 * @size: length of array
 * Return:
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	_Bool sorted = true;

	if (!array || size < 2)
		return;

	while (sorted)
	{
		sorted = false;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
				sorted = true;
			}
		}
	}
}

/**
 * swap - swaps two integers
 * @a: first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
