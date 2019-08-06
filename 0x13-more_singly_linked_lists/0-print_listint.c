#include "lists.h"

/**
* print_listint - Print content count nodes
* @h: head node
* Return: count of nodes
**/

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
