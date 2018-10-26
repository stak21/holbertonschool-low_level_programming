#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a linked list
* @head: a pointer to the head of a linked list
*/

void free_list(list_t *head)
{
	list_t *next_ptr;

	while (head->next != NULL)
	{
		next_ptr = head;
		head = head->next;
			free(next_ptr);
	}

}
