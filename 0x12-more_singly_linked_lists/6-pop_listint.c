#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - pops the linked list and returns it
* @head: a pointer to a pointer to a struct
* Return: the data in the popped node
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *free_node;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);
	free_node = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(free_node);

	return (data);
}
