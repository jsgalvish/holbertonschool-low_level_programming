#include <stdio.h>

/**
* main - print buzz
* Return: 0
*/

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
			if ((i % 5) == 0)
				printf("buzz ");
			else
				printf(" ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			if (i != 100)
				printf(" ");
		}
		else
			printf("%d", i);
	}
	return (0);
}
