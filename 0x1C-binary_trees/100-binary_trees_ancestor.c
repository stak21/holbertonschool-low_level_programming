#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes
 * @first: The first node to check the ancestors of
 * @second: The second node to check the ancestors of
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,\
		const binary_tree_t *second)
{
	unsigned int f_depth = 0;
	unsigned int s_depth = 0;
	unsigned int d_depth = 0;
	unsigned int i;

	const binary_tree_t *f;
	const binary_tree_t *s;
	const binary_tree_t *lower;
	const binary_tree_t *other;


	if (!first || !second)
		return;
	f = first;
	s = second;

	while (f->parent)
	{
		f = f->parent;
		f_depth += 1;
	}
		
	while (s->parent)
	{
		s = s->parent;
		s_depth += 1;
	}

	d_depth = f_depth > s_depth ? f_depth - s_depth : s_depth - f_depth;	
	lower = f_depth > s_depth ? first : second;
	other = lower == first ? second : first;

	for (i = 0; i < d_depth; i += 1)
		lower = lower->parent;

	while (other->parent != NULL && other != lower)
	{
		other = other->parent;
		lower = lower->parent;
	}
	if (other == lower)
		return ((binary_tree_t*)lower);
	else
		return (NULL);
}
