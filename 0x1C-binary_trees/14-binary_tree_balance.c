#include "binary_trees.h"
/**
 * binary_tree_balance - checks the balance factor of a binary tree
 * @tree: the root of the tree
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_left = 0;
	int balance_right = 0;
	int balance_factor = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		balance_left += binary_tree_balance(tree->left) + 1;
	if (tree->right)
		balance_right += binary_tree_balance(tree->right) + 1;
	if (!tree->parent)
	{
		balance_factor = balance_left - balance_right;
		return (balance_factor);
	}
	if (balance_left > balance_right)
		return (balance_left);
	if (balance_right > balance_left)
		return (balance_right);
	return (balance_right);
}
