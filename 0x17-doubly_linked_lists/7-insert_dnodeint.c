#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head of list
 * @idx: index to insert node
 * @n: number of node added
 * Return: node inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *newNode;
	size_t size = 0;

	if (!h)
		return (NULL);
	if (!idx)
		return (add_dnodeint(h, n));
	while (current)
	{
		size++;
		current = current->next;
	}
	if (size < idx)
		return (NULL);
	if (size == idx)
		return (add_dnodeint_end(h, n));
	current = *h;
	while (--idx)
		current = current->next;
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	newNode->n = n;
	newNode->next = current->next;
	current->next->prev = newNode;
	newNode->prev = current;
	current->next = newNode;
	return (newNode);
}
