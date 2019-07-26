#include "variadic_functions.h"
/**
* print_all - prints anything
* @format: a list of type arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *tmp;

	va_start(list, format);

	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			tmp = va_arg(list, char *);
			if (tmp == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", tmp);
			break;
		default:
			i++;
			continue;
		}

		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}

	va_end(list);
	printf("\n");
}
