#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
* @h: pointer to the struct linked list
* Return: the number of elements
*/

size_t list_len(const list_t *h)
{
	size_t elements;

	while (h)
	{
		h = h->next;
		elements += 1;
	}

	return (elements);
}
