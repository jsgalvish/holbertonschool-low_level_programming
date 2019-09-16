#include "lists.h"

/**
 * dlistint_len - the number of elements in a linked list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t size = 0;

	while (current)
	{
		size++;
		current = current->next;
	}
	return (size);
}
