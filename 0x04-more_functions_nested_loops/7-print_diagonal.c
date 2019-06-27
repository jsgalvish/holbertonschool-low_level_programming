#include "holberton.h"
/**
* print_diagonal - print diagonal
* @n: number of line
* Return: nothing
*/

void print_diagonal(int n)
{

	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= i ; j++)
			{
				if (i != j)
					_putchar(' ');
				else
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		_putchar('\n');
	}
}
