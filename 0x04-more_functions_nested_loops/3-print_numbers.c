#include "holberton.h"
/**
* print_numbers - print numbers from 0 to 9
* Return: nothing
*/

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');
}
