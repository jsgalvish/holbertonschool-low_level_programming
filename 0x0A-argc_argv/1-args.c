#include <stdio.h>
#include "holberton.h"
/**
 * main - prints argument count
 * @argc: argument count
 * @argv: takes array
 * Return: 0(success)
 */
int main(int argc, char *argv[]__attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
