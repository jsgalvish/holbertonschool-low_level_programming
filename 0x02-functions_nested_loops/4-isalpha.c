#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: value to check
 * Return: 1 if is a char
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
