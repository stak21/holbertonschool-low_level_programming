#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a list
* @head: pointer to the linked list
* @n: the data in the node
* Return: the address of th enew node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur_next;
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	cur_next = *head;
	while (cur_next->next != NULL)
		cur_next = cur_next->next;
	new_node->prev = cur_next;
	cur_next->next = new_node;

	return (new_node);
}
