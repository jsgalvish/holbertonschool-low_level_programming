#include "holberton.h"
/**
* _isupper - function to check is upercase
* @c: number to check
* Return: 1 if is uppercase
*/

int _isupper(int c)
{
	int i = 0;

	if (c > 64 && c < 91)
		i = 1;
	return (i);
}
