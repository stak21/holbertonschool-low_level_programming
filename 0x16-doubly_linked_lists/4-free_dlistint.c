#include "lists.h"

/**
* free_dlistint - frees a linked list
* @head: pointer to head
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_ptr;

	if (!head)
		return;

	free_ptr = head;

	while (head != NULL)
	{
		head = head->next;
		free(free_ptr);
		free_ptr = head;
	}
}
