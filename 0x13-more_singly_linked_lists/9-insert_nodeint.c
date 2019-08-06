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
	listint_t *new_node, *store_head;
	unsigned int x;

	store_head = *head;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	for (x = 0; store_head != NULL; x++)
	{
		if (x == idx - 1)
		{
			new_node->next = store_head->next;
			store_head->next = new_node;
			return (new_node);
		}
		store_head = store_head->next;
	}
	free(new_node);
	return (NULL);
}
