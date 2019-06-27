#include "holberton.h"
/**
* print_line - print line
* @n: number of line
* Return: nothing
*/

void print_line(int n)
{

	if (n > 0)
	{
		for (int i = 1; i < n + 1; i++)
			_putchar('_');
	}
	_putchar('\n');
}
