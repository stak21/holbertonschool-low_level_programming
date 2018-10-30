#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* reverse_listint - reverses a linked list
* @head: a pointer to pointer to a struct
* Return: head
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_ptr;
	listint_t *cur_ptr;

	/* might give an error if accessing NULL */
	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	prev_ptr = *head;
	cur_ptr = (*head)->next;

	while (cur_ptr != NULL)
	{
		(*head)->next = cur_ptr->next;
		cur_ptr->next = prev_ptr;
		prev_ptr = cur_ptr;
		cur_ptr = (*head)->next;
	}
	*head = prev_ptr;

	return (*head);
}
