#include "holberton.h"
/**
 * print_last_digit - read the tittle
 * @i: number to validate
 *
 * Return: the last digit
 */
int print_last_digit(int i)
{
	int l = i % 10;

	if (l < 0)
	{
		l = -l;
		_putchar('0' + l);
		return (l);
	}
	_putchar('0' + l);
	return (l);
}
