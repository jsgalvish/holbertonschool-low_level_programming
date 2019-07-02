#include "holberton.h"

/**
* print_rev - reverse string
* @s: string to print
*/

void print_rev(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;

	while (size > 0)
	{
		size--;
		_putchar(s[size]);
	}
	_putchar('\n');
}
