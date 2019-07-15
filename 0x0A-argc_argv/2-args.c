#include "holberton.h"
#include <stdio.h>
/**
  * main - prints out arguments
  * @argc: counts arguments
  * @argv: takes array
  * Return: 0(success)
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
