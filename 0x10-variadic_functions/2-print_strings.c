#include "variadic_functions.h"
/**
* print_strings - print string
* @separator: separator
* @n: number of parameters
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n > 0 && separator)
	{
		va_list a_list;
		unsigned int i;
		char *text;

		va_start(a_list, n);

		for (i = 0; i < n; i++)
		{
			text = va_arg(a_list, char *);
			if (text == NULL)
				text = "(nil)";

			printf("%s", text);

			if (i < (n - 1))
				printf("%s", separator);
		}

		printf("\n");
		va_end(a_list);
	}
}
