#include "lists.h"

/**
 * free_listint - delete a list
 * @head: header of list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head)
		while (head)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
	head = NULL;
}
