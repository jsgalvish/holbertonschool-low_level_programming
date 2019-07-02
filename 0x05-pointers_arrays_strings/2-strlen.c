#include "holberton.h"
/**
* _strlen - return size of str
* @s: string to get size
* Return: size of s
*/

int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		s++;
		size++;
	}

	return (size);
}
