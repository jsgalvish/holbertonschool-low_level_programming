#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers
  * @argc: takes arguments
  * @argv: array of arguments
  * Return: 0(success)
  */
int main(int argc, char *argv[])
{

	int i, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
			result *= atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
