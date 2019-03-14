#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/**
 * binary_tree_uncle - finds uncle of a node.
 * @node: ptr to the node to find the uncle.
 * Return: pointer to the uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	uncle = binary_tree_sibling(node->parent);
	if (uncle)
		return (uncle);
	else
		return (NULL);
}

/**
 * binary_tree_sibling - finds sibling of a node.
 * @node: ptr to the node to find the sibling.
 * Return: pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if ((node->parent)->left)
	{
		if (node == ((node->parent)->left))
		{
			if ((node->parent)->right)
				return ((node->parent)->right);
		}
	}
	if ((node->parent)->right)
	{
		if (node == ((node->parent)->right))
		{
			if ((node->parent)->left)
				return ((node->parent)->left);
		}
	}
	return (NULL);
}
