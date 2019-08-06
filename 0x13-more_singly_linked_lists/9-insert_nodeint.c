#include "lists.h"

/**
* insert_nodeint_at_index - insert a node in a index
* @head: head of list
* @idx: index to the new node
* @n: value of new node
* Return: new node
**/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *n_node;

	unsigned int i;

	n_node = malloc(sizeof(listint_t));
	if (!head || !n_node)
		return (NULL);
	n_node->n = n;
	if (!idx)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	current = *head;
	while (current)
	{
		if (i == idx - 1)
		{
			n_node->next = current->next;
			current->next = n_node;
			return (n_node);
		}
		i++;
		current = current->next;
	}
	free(n_node);
	return (NULL);
}
