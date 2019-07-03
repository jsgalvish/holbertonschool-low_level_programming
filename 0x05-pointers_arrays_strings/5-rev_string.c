#include "holberton.h"
/**
 * rev_string - remplace a reverse string
 * @s: string
 */
void rev_string(char *s)
{
	int size, i;
	char a;

	size = 0;
	while (*(s + size) != '\0')
		size++;

	for (i = 0; i < (size / 2); i++)
	{
		a = *(s + i);
		*(s + i) = *(s + size - i - 1);
		*(s + size - i - 1) = a;
	}
}
