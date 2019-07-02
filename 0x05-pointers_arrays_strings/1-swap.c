#include "holberton.h"
/**
* swap_int - change the value bettwen to variables
* @a: first value to swap
* @b: second value to swap
**/

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
