#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a list
* @head: pointer to the linked list
* @index: the index of the node to return
* Return: the node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur_ptr;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	cur_ptr = head;

	while (i < index && cur_ptr != NULL)
	{
		cur_ptr = cur_ptr->next;
		i += 1;
	}

	if (i != index)
		return (NULL);

	return (cur_ptr);
}
