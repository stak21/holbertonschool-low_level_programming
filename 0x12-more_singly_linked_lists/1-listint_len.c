#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* listint_len - returns the number of elements in a linked list
* @h: points to the head of a linked list
* Return: the number of nodes in a list
*/

size_t listint_len(const listint_t *h)
{
	size_t nodeCount;
	const listint_t *nxt_ptr;

	nodeCount = 0;
	nxt_ptr = h;

	while (nxt_ptr != NULL)
	{
		nxt_ptr = nxt_ptr->next;
		nodeCount += 1;
	}

	return (nodeCount);
}
