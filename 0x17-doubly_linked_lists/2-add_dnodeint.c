#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: double pointer to head
 * @n: value of node
 * Return: pointer of node that has been added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *tmp = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;

	if (tmp == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	newNode->next = tmp;
	tmp->prev = newNode;
	*head = newNode;
	return (newNode);
}
