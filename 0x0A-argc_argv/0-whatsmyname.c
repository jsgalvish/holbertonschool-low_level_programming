#include <stdio.h>
#include "holberton.h"
/**
 * main - prints program name
 * @argc: argument count
 * @argv: array of strings
 * Return: int
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
