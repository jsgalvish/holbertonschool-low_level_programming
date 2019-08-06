#include "lists.h"

/**
* delete_nodeint_at_index - delete a specific node
* @head: header of list
* @index: index of node to delete
* Return: 1 if delete, -1 if fail
**/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *next;

	unsigned int i;

	if (!head || !(*head))
		return (-1);
	current = *head;
	if (!index)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; current && i < index - 1; i++)
		current = current->next;
	if (!current || !(current->next))
		return (-1);
	next = current->next->next;
	free(current->next);
	current->next = next;
	return (1);
}
