#include "holberton.h"
/**
* _isdigit - function to check is digit
* @c: number to check
* Return: 1 if is digit
*/

int _isdigit(int c)
{
	int i = 0;

	if (c > 47 && c < 58)
		i = 1;
	return (i);
}
