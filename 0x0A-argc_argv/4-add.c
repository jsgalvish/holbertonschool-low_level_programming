#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - parses and adds all command args that are ints
 * @argc: number of arguements
 * @argv: array of ints to add
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, array_i;
	int sum = 0;

	(void)argv;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (array_i = 0; argv[i][array_i] != '\0'; array_i++)
			{
				if (!isdigit(argv[i][array_i]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
