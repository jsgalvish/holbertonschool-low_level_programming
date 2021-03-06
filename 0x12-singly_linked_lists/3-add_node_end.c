#include "lists.h"

/**
 * _strlen - length of string
 * @s: string s
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
* add_node_end - add node at the end to a list
* @head: list to add
* @str: object to add
* Return: address of a new element
**/

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node, *last_node = *head;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next)
		last_node = last_node->next;

	last_node->next = new_node;

	return (last_node);
}
