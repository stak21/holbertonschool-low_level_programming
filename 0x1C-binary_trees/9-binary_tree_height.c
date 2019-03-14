#include "binary_trees.h"
/**
 * binary_tree_height - measuring the height of a tree.
 * @tree: ptr to the root node that measures tree.
 * Return: 0 if tree is null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right = binary_tree_height(tree->right) + 1;
	if (left > right)
		return (left);
	if (right > left)
		return (right);
	else
		return (left);
}
