#include "holberton.h"
/**
* print_square - print square
* @size: size of the square
* Return: nothing
*/

void print_square(int size)
{

	if (size > 0)
	{
		for (int i = 1; i <= size; i++)
		{
			for (int j = 1; j <= size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
