#include "lists.h"

 /**
* add_dnodeint - adds a new node at the beginning of a list
* @head: pointer to the linked list
* @n: the data in the node
* Return: the address of th enew node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
	
}
