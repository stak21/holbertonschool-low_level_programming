#ifndef SORT_HEADER
#define SORT_HEADER

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @next: Pointer to the next node of the list
 * @prev: Pointer to the previous node of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void merge_sort(int *, size_t);

#endif
