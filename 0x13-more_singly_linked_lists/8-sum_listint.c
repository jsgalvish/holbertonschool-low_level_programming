#include "lists.h"

/**
 * sum_listint - sum all node values
 * @head: head of the list
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	listint_t *current;

	int sum = 0;

	if (!head)
		return (0);
	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
