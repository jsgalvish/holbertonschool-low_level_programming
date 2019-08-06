#include "lists.h"

/**
 * add_nodeint_end - add node to end
 * @head: list
 * @n: n of new node
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));
	listint_t *current;

	if (!head || !n_node)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	if (!*head)
		*head = n_node;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = n_node;
	}
	return (n_node);
}
