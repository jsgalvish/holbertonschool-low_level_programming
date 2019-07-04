#include "holberton.h"
#include <stdio.h>

/**
* _strcat - concat
* @dest: dest;
* @src: to concate;
* Return: return the concat;
**/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = src[j];
	return (dest);
}
