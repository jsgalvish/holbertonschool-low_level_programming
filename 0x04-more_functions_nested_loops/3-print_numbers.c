#include "holberton.h"

/**
* print_numbers - print numbers from 0 to 9
*
* Return: nothing
*/

void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
