#include <stdio.h>

/**
 * main - void
 *
 * Return: Alphabet
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);

	putchar('\n');
	return (0);
}
