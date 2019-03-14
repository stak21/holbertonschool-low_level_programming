#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: The root of the tree
 * Return: 1 if it is a full binary tree, else 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_flag = 1;

	if (tree == NULL)
		return (0);
	if (tree->left)
		if (binary_tree_is_full(tree->left) == 0)
			return (0);
	if (tree->right)
		if (binary_tree_is_full(tree->right) == 0)
			return (0);
	if (tree->left && !tree->right)
		return (0);
	if (!tree->left && tree->right)
		return (0);
	return (full_flag);
}
