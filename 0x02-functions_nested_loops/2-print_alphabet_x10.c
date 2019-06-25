#include "holberton.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char l = 'a';

		while (l <= 'z')
		{
			_putchar (l);
			l++;
		}
		_putchar('\n');
		i++;
	}
}
