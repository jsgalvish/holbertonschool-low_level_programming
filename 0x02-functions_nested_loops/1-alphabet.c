#include "holberton.h"
/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar (l);
		l++;
	}
	_putchar('\n');
}
