#include "holberton.h"

/**
 * print_alphabet - void
 *
 * Return: double numbers with ,
 */

int _islower(int c)
{
	int result = 0;
	
	for (int i = 'a'; i <= 'z'; i++)
		if (c == i)
			result = 1;

	return (result);
		
	
}
