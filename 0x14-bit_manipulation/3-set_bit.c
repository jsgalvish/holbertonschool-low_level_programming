#include "holberton.h"

/**
 * set_bit - put a bit to 1 in a specific index.
 * @n: number to change
 * @index: index to change
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
