#include "holberton.h"
/**
 * _abs - absolute value
 * @c: The value for be checked
 *
 * Return: the number
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	return (c);
}
