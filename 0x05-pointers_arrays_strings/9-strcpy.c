#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copy of an array.
 * @dest: copy array
 * @src: original array
 * Return: copy array.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0' ; i++)
		*(dest + i) = *(src + i);

	*(dest + i) = '\0';
	return (dest);
}
