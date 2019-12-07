#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node left-child of another node
 * @parent: pointer
 * @value: input
 * Return: pointer new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *btree = NULL;

	if (!parent)
		return (NULL);
	btree = calloc(1, sizeof(binary_tree_t));
	if (!btree)
		return (NULL);
	btree->n = value;
	btree->parent = parent;
	if (parent->left)
	{
		btree->left = parent->left;
		btree->left->parent = btree;
	}
	parent->left = btree;
	return (btree);
}
