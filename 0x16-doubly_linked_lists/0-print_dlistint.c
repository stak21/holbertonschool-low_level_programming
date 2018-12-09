#include "lists.h"

/**
* print_dlistint - prints all the leemnts of a list
* @h: pointer to the linked list
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *cur_ptr;

	size_t count = 0;

	if (!h)
		return (0);

	cur_ptr = h;

	while (cur_ptr != NULL)
	{
		count += 1;
		printf("%d\n", cur_ptr->n);
		cur_ptr = cur_ptr->next;
	}

	return (count);
}
