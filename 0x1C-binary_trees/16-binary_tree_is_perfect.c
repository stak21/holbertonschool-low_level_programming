#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: The root of the tree
 * Return: 1 if it is a perfect binary tree, else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height = binary_tree_is_perfect(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_is_perfect(tree->right) + 1;
	if (!tree->parent)
	{
		if (left_height == 1 ||  right_height == 1)
			return (0);
		else
			return (1);
	}
	if (left_height != right_height)
		return (0);
	/* check if its a leaf */
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);
	return (left_height);
}
