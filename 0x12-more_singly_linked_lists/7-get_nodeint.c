#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a linked list
* @head: a pointer to a struct
* @index: holds the index to return
* Return: a node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nxt_ptr;

	nxt_ptr = head;

	for (i = 0; i < index; i += 1)
	{
		if (nxt_ptr == NULL)
			return (NULL);
		nxt_ptr = nxt_ptr->next;
	}

	return (nxt_ptr);
}
