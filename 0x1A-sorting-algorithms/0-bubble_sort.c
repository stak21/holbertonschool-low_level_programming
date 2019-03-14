#include "sort.h"

void swap(int *arr, int idx1, int idx2);
/**
 * bubble_sort - Sorts a list of integers with bubble sort
 * @array: An array of integers
 * @size: The size of the array
 */

void bubble_sort(int *array, size_t size)
{
	/* iterate throught the array once
	 * during each iteration, iterate through the array comparing i and j
	 * swap if greater
	 */
	size_t i, j;

	if (size < 2)
		return;

	for (i = 1; i <= size; i += 1)
		for (j = 0; j < size - i; j += 1)
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1);
				print_array(array, size);
			}
}

/**
 * swap - Swap integers in an array
 * @array: An array of integers
 * @idx1: Index to swap
 * @idx2: Index to swap
 */

void swap(int *arr, int idx1, int idx2)
{
	int temp;

	temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

