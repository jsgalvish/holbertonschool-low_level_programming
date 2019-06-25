#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number to be evaluate
 *
 * Return: 1 is positive -1 if is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
