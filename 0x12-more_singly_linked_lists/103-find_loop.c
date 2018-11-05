#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
* @head: pointer to a linked list
* Return: the address of where the loop starts
* otherwise NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast_ptr, *slow_ptr;

	if (head == NULL)
		return (NULL);
	fast_ptr = head->next;
	slow_ptr = head;

	while (fast_ptr && fast_ptr < slow_ptr)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}

	return (fast_ptr);
}
