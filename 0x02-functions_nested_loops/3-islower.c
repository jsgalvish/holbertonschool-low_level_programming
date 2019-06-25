#include "holberton.h"
/**
 * _islower - check lower case
 * @c: value to check
 *
 * Return: 1 if is lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
