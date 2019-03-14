#include "binary_trees.h"

/**
 * binary_tree_size- goes through a binary tree counting the size
 * @tree: pointer to the root node
 * Return: the size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);
	if (tree->left)
		count += binary_tree_size(tree->left);
	if (tree->right)
		count += binary_tree_size(tree->right);
	return (count);
}
