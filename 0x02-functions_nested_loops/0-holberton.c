#include "_putchar.c"
#include <string.h>

/**
 * main - void
 *
 * Return: double numbers with ,
 */

int main(void)
{
	char str[] = "Holberton\n";

	for (int i = 0; i < strlen(str); i++)
		_putchar(str[i]);
	return (0);
}
