#include "holberton.h"

/**
 * get_bit - get bit of a number
 * @n: binary number
 * @index: index to get
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
