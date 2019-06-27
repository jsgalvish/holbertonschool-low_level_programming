#include "holberton.h"
/**
* print_most_numbers - print numbers from 0 to 9 - 2 and 4
*
* Return: nothing
*/

void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
