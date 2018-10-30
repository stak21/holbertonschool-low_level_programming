#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - adds a node at the end
* @head: a pointer to a pointer to a struct
* @n: holds the data for the new node
* Return: head
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nxt_ptr;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	nxt_ptr = *head;


	while (nxt_ptr->next != NULL)
		nxt_ptr = nxt_ptr->next;
	nxt_ptr->next = new_node;

	return (new_node);
}
