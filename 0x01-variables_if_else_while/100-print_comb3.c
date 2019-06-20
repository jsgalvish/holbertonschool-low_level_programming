#include <stdio.h>

/**
 * main - void
 *
 * Return: double numbers with ,
 */

int main(void)
{
	int i;
	int j;
	int k = 0;

	for (i = 48; i < 58; i++)
	{
		for (j = 48 + k; j < 58; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
