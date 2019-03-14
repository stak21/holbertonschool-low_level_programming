#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that creates a binary tree node.
 * @parent: parent node.
 * @value: value to be added to the new node.
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		new_node->left = parent->left;
		parent->left = new_node;
		old_node = new_node->left;
		old_node->parent = new_node;
	}

	return (new_node);
}
