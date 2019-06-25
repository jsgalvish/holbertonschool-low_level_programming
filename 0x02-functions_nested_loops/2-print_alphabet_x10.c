#include "holberton.h"

/**
 * print_alphabet - void
 *
 * Return: double numbers with ,
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
