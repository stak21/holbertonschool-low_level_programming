#include "sort.h"

/**
 * insertion_sort_list - Sorts a linked list with insertion sort
 * @list: A linked list
 */
void swap_list(listint_t *cur, listint_t *prev);

void insertion_sort_list(listint_t **list)
{
	/* Iterate through the linked list
	 * while prev != NULL
	 *		if prev > cur
	 *			swap && print
	 *			break
	 */
	listint_t *cur, *prev;

	if (!list || !(*list) || !(*list)->next)
		return;

	cur = (*list)->next;
	while (cur != NULL)
	{
		prev = cur;
		while (prev->prev)
		{
			if (prev > cur)
			{
				swap_list(cur, prev);
				print_list(*list);
				break;
			}
			prev = prev->prev;
		}
		cur = cur->next;
	}
}

/**
 * swap_list - swaps the position of two nodes in a linked list
 * @cur: The linked list
 * @prev: The linked list
 */
void swap_list(listint_t *cur, listint_t *prev)
{
	listint_t *temp_next;
	
	temp_next = cur->next;
	cur->prev = prev->prev;
	cur->next = prev;
	prev->prev = cur;
	prev->next = temp_next;
}
