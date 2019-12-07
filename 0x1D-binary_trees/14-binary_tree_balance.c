#include "binary_trees.h"

/**
 * _binary_tree_height - helper binary_tree_height
 * @tree: input tree
 * Return: height tree
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t var1, var2;

	if (!tree)
		return (0);

	var1 = _binary_tree_height(tree->left);
	var2 = _binary_tree_height(tree->right);
	return (M_TREE(var1, var2) + 1);
}

/**
 * binary_tree_height - height of a binary tree
 * @tree: input tree
 * Return: height tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree) - 1);
}

/**
 * binary_tree_balance - balance factor of a binary tree
 * @tree: input tree
 * Return: balance descendants
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int var1, var2;

	if (!tree)
		return (0);
	var1 = (tree->left)
		? (int)binary_tree_height(tree->left)
		: -1;
	var2 = (tree->right)
		? (int)binary_tree_height(tree->right)
		: -1;
	return (var1 - var2);
}
