#include "variadic_functions.h"
/**
* print_numbers - print numbers with separator
* @separator: separator
* @n: numbers of variables
**/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n > 0 && separator)
	{
		va_list a_list;
		unsigned int i;

		va_start(a_list, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(a_list, int))
			if (i < (n - 1))
				printf("%s", separator);
		}

		printf("\n");
		va_end(a_list);
	}
}
