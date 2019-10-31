#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list: pointer to head of list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *last, *curr;

	if (!list || !*list)
		return;

	curr = *list;
	while (curr && curr->next)
	{
		if (curr->n > curr->next->n)
		{
			swap_ll(curr, curr->next, list);
			last = curr;
			curr = curr->prev;
			while (curr && curr->prev)
			{
				tmp = curr;
				if (tmp->n < tmp->prev->n)
					swap_ll(tmp->prev, tmp, list);
				else
					break;
			}
			curr = last;
		} else
			curr = curr->next;
	}
}

/**
 * swap_ll - swaps two nodes in a doubly linked list
 * @left: left node
 * @right: right node
 * @list: pointer to head of linked list
 */
void swap_ll(l_t *left, l_t *right, l_t **list)
{
	l_t *p, *n;

	p = left->prev;
	n = right->next;
	if (p)
		p->next = right;
	else
		*list = right;
	if (n)
		n->prev = left;
	right->prev = p;
	left->next = n;

	right->next = left;
	left->prev = right;
	print_list(*list);
}
