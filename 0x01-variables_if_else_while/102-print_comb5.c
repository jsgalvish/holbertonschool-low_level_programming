#include <stdio.h>

/**
 * main - void
 *
 * Return: three numbers ,
 */

int main(void)
{
	int i, j, k, l, m;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				if (k == i)
					m = j + 1;
				else
					m = 48;

				for (l = m; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56 || k != 57 || l != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
