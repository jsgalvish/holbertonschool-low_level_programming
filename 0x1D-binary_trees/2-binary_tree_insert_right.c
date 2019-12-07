#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node right-child of another node
 * @parent: pointer
 * @value: input
 * Return: pointer new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *btree = NULL;

	if (!parent)
		return (NULL);
	btree = calloc(1, sizeof(binary_tree_t));
	if (!btree)
		return (NULL);
	btree->n = value;
	btree->parent = parent;
	if (parent->right)
	{
		btree->right = parent->right;
		btree->right->parent = btree;
	}
	parent->right = btree;
	return (btree);
}
