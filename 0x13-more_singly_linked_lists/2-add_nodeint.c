#include "lists.h"

/**
* add_nodeint - add node to header
* @head: current header
* @n: value to node
* Return: node or null on fail
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (n_node)
	{
		n_node->n = n;
		n_node->next = *head;
		*head = n_node;

		return (n_node);
	}

	return (NULL);
}
