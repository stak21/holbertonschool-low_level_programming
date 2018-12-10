#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - delets a node at a given index
* @head: a pointer to a pointer to a linked list
* @index: the index of the node to delete
* Return: 1 success else 0
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur_ptr, *prev_ptr;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	cur_ptr = *head;
	prev_ptr = NULL;
	i = 0;

	while (i < index && cur_ptr != NULL)
	{
		i += 1;
		prev_ptr = cur_ptr;
		cur_ptr = cur_ptr->next;
	}
	if (i != index)
		return (-1);
	if (index == 0)
		*head = cur_ptr->next;
	else
		prev_ptr->next = cur_ptr->next;
	if (cur_ptr->next != NULL)
		cur_ptr->next->prev = prev_ptr;
	free(cur_ptr);

	return (1);
}
