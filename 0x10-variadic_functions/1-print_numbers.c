#include "variadic_functions.h"
/**
* print_numbers - print numbers with separator
* @separator: separator
* @n: numbers of variables
**/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list argmts;

	num = 0;

	va_start(argmts, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(argmts, int);
		printf("%d", num);
		if ((i + 1) < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argmts);
}
