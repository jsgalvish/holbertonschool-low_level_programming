#include "holberton.h"
/**
* more_numbers - print numbers from 0 to 14 3 times
* Return: nothing
*/

void more_numbers(void)
{
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar('1');
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}
