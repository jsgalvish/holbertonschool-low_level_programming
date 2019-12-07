#include "binary_trees.h"

/**
 * binary_tree_is_root - checks node is root
 * @node: pointer input
 * Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!node->parent);
}
