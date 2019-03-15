#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes
 * @first: The first node to check the ancestors of
 * @second: The second node to check the ancestors of
 * Return: the ancestor node or NULL
 */

bt *binary_trees_ancestor(const bt *first, const bt *second)
{
	unsigned int f_depth, s_depth, d_depth;
	f_depth = s_depth = d_depth = 0;
	unsigned int i;
	const bt *f, *s, *lower, *other;

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
		return ((bt *)lower);
	else
		return (NULL);
}
