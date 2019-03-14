#include "sort.h"

void sort(int *array, int *cpy, int lo, int hi);
/**
 * merge_sort- Sorts an array of integers using the Merge sort
 * @array: An array of integers
 * @size: The size of arrays
 */

void merge_sort(int *array, size_t size)
{
	size_t i;
	int *cpy = malloc(sizeof(size));

	if (size < 2 || !cpy)
		return;
	for (i = 0; i < size; i += 1)
		cpy[i] = array[i];
	
	sort(array, cpy, 0, size - 1);
}

/**
 * sort- Sorts an array of integers using the Merge sort
 * @array: An array of integers
 * @cpy: a cpy of the array
 * Return: a sorted array
 */
void sort(int *array, int *cpy, int lo, int hi)
{
	if (lo != hi)
		sort(array, cpy, lo, hi / 2 - 1);
	while (lo != hi)
	{
		printf("array: %i\n", cpy[lo]);
		lo += 1;
	}
}
