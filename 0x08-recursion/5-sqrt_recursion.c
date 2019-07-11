#include "holberton.h"

/**
 *_sqrt_recursion - blank
 * @n: blank
 * Return: balnk
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (helper(n, 1));
}

/**
 * helper - blank
 * @n: number
 * @i: incrementor
 * Return: -1;
 */

int helper(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (helper(n, i + 1));
	else
		return (-1);
}
