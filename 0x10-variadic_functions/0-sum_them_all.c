#include "variadic_functions.h"
/**
* sum_them_all - sum variable arguments
* @n: number of arguments
* Return: sum of arguments
**/
int sum_them_all(const unsigned int n, ...)
{
	if (n > 0)
	{
		va_list a_list;
		unsigned int i, result = 0;

		va_start(a_list, n);

		for (i = 0; i < n; i++)
			result += va_arg(a_list, int);

		va_end(a_list);

		return (result);
	}

	return (0);
}
