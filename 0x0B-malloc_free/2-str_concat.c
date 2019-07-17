#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check if a char is a digit
 * @s1: the first string
 * @s2: the second string
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int i2 = 0;
	unsigned int j2 = 0;

	while (s1 != NULL && s1[i])
		i++;
	while (s2 != NULL && s2[j])
		j++;
	a = malloc((i + j) * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	while (i2 < i)
	{
		a[i2] = s1[i2];
		i2++;
	}

	while (j2 < j)
	{
		a[j2 + i2] = s2[j2];
		j2++;
	}
	return (a);
}
