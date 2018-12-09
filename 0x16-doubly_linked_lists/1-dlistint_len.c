#include "lists.h"

/**
* dlistint_len - prints all the leemnts of a list
* @h: pointer to the linked list
* Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cur_ptr;
	size_t count = 0;

	if (!h)
		return (0);

	cur_ptr = h;

	while (cur_ptr != NULL)
	{
		count += 1;
		cur_ptr = cur_ptr->next;
	}

	return (count);
}
