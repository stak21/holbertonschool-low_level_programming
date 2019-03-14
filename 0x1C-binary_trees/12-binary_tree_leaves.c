#include "binary_trees.h"
/**
 * binary_tree_leaves - measures the size of a binary tree.
 * @tree: pointer to the root node, to count the leaves.
 * Return: 0 if node is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		count += binary_tree_leaves(tree->left);
	if (tree->right)
		count += binary_tree_leaves(tree->right);
	if (!tree->left && !tree->right)
		return (1);
	else
		return (count);
}
