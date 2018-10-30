#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: a pointer to a pointer to a struct
* @idx: the index where the new node should be inserted
* @n: the data for the new node
* Return: returns the new node
* otherwise NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nxt_ptr;
	listint_t *prev_ptr;
	listint_t *new_node;
	unsigned int i;

	if (*head == NULL)
		return (NULL);
	nxt_ptr = *head;

	for (i = 0; i < idx; i += 1)
	{
		if (nxt_ptr == NULL)
			return (NULL);
		prev_ptr = nxt_ptr;
		nxt_ptr = nxt_ptr->next;
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = nxt_ptr;
	prev_ptr->next = new_node;

	return (new_node);
}
