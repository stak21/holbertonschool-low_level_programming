#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - frees a list
* @head: a pointer to a pointer to a struct
*/

void free_listint2(listint_t **head)
{
	listint_t *free_ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		free_ptr = *head;
		*head = (*head)->next;
		free(free_ptr);
	}
	*head = NULL;
}
