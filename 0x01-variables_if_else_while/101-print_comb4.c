#include <stdio.h>

/**
 * main - void
 *
 * Return: three numbers ,
 */

int main(void)
{
	int i;
	int j;
	int k;
	int m;
	int l = 0;

	for (i = 48; i < 58; i++)
	{
		for (j = 48 + l; j < 58; j++)
		{
			for (k = 48 + m; k < 58; k++)
			{
				if (i != j && j != k && i != k && i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
			m++;
		}
	}
	putchar('\n');
	return (0);
}
