#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint - frees a linked list
* @head: pointer to the head of a linked list
*/

void free_listint(listint_t *head)
{
	listint_t *free_ptr;


	while (head != NULL)
	{
		free_ptr = head;
		head = head->next;
		free(free_ptr);
	}

}
