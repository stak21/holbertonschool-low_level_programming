#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_dlistint - return the sum of all the data
* @head: the pointer to a linked list
* Return: the sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *cur_ptr;

	if (head == NULL)
		return (0);

	cur_ptr = head;
	sum = 0;

	while (cur_ptr != NULL)
	{
		sum += cur_ptr->n;
		cur_ptr = cur_ptr->next;
	}

	return (sum);
}
