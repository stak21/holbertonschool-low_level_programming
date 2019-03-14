#include "binary_trees.h"
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
