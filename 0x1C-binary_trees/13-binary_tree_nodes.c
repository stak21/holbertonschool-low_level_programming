#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with atleast a child
 * @tree: pointer to the root node, to count the nodes.
 * Return: 0 if node is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		count += binary_tree_nodes(tree->left);
	if (tree->right)
		count += binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (count + 1);
	else
		return (count);
}
