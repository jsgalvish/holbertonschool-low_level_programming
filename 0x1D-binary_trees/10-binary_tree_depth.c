#include "binary_trees.h"

/**
 * binary_tree_depth - depth of a node in a binary tree
 * @tree: input b-tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
