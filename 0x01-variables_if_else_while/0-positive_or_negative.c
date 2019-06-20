#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - void
 *
 * Return: positive or negative return
 * for a random number
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n <= 0)
	{
		if (n == 0)
			printf("%i is zero\n", n);
		else
			printf("%i is negative\n", n);
	}
	else
		printf("%i is positive\n", n);
	return (0);
}
