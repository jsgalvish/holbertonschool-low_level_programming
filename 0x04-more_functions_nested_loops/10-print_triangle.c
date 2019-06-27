#include "holberton.h"
/**
* print_triangle - print triangle
* @size: size of the square
* Return: nothing
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		k = size - 1;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size ; j++)
			{
				if (k >= j)
					_putchar(' ');
				else
					_putchar('#');
			}
			k--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
