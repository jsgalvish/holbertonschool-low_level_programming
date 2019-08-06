#include "lists.h"

/**
* listint_len - move around a lists
* @h: head node
* Return: Size of the structure
**/

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}

	return (i);
}
