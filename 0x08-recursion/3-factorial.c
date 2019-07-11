#include "holberton.h"

/**
 * factorial - prints factorial
 * @n: number
 * Return: 0 if n is lower, return -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 2 && n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n > 1)
		return (n * factorial(n - 1));
	else
		return (0);
}
