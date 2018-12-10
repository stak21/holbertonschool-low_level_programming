#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a node at a given position
* @h: the pointer to a pointer to a linked list
* @idx: the indx to insert the node at
* @n: the data
* Return: the address of the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur_ptr, *prev_ptr;
	dlistint_t *newnode;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;

	if (*h == NULL && idx == 0)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}

	cur_ptr = *h;
	i = 0;

	while (i < idx && cur_ptr != NULL)
	{
		i += 1;
		prev_ptr = cur_ptr;
		cur_ptr = cur_ptr->next;
	}

	if (i != idx)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = cur_ptr;
	newnode->prev = prev_ptr;
	prev_ptr->next = newnode;

	return (newnode);
}
