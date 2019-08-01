#include "lists.h"

/**
 * free_list - frees a list
 * @head: First element list
 */

void free_list(list_t *head)
{
	list_t *d_head;

	while (head != NULL)
	{
		d_head = head;
		head = head->next;
		free(d_head->str);
		free(d_head);
	}
}
