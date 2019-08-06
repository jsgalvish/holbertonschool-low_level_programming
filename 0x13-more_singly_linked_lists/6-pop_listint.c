#include "lists.h"

/**
 * pop_listint - delete head
 * @head: list of nodes
 * Return: return head->n
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int res;

	if (!(*head) || !head)
		return (0);
	current = *head;
	res = current->n;
	*head = (*head)->next;
	free(current);
	return (res);
}
