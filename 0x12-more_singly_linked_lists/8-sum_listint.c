#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - returns the sum of all the data of a list
* @head: a pointer to the head
* Return: the sum of all the data
*/

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *nxt_ptr;

	if (!head)
		return (0);
	nxt_ptr = head;
	sum = 0;

	while (nxt_ptr != NULL)
	{
		sum += nxt_ptr->n;
		nxt_ptr = nxt_ptr->next;
	}

	return (sum);
}
