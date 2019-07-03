#include "holberton.h"
/**
 * puts_half - prints half
 * @str: string
 */
void puts_half(char *str)
{
	int c, i;

	for (c = 0; c >= 0 ; c++)
	{
		if (str[c] == '\0')
			break;
	}

	if (c % 2 == 1)
		i = c / 2;
	else
		i = (c - 1) / 2;

	for (i++; i < c; i++)
		_putchar(str[i]);
	_putchar('\n');
}
