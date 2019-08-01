#include "lists.h"

/**
* print_list - print the list
* @h: list top count
* Return: count of nodes
*/

size_t print_list(const list_t *h)
{
	int count, d;
	char *str;

	for (count = 0; h; count++)
	{
		(h->str) ? (d = h->len, str = h->str) : (d = 0, str = "(nil)");
		printf("[%d] %s\n", d, str);
		h = h->next;
	}

	return (count);
}
