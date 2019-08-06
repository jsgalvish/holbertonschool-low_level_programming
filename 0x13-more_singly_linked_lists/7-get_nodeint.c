#include "lists.h"

/**
 * get_nodeint_at_index - get the n node
 * @head: header of the list
 * @index: node to return
 * Return: adrees to return
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	unsigned int count = 0;

	current = head;
	while (current)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (current);
}
