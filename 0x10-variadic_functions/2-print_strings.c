#include "variadic_functions.h"
/**
* print_strings - print string
* @separator: separator
* @n: number of parameters
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *pstr;

	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		pstr = va_arg(str, char *);
		if (pstr == NULL)
			printf("(nil)");
		else
			printf("%s", pstr);
		if ((i + 1) < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
