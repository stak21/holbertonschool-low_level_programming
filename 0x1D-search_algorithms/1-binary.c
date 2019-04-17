#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* binary_search - Search for a value in a sorted array of integers using
* binary search algorithm
*
* @array: The array to search in
* @size: The size of the array
* @value: The value to search for
*
* Return: The index of the value
* Else: -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, mid;
	int index = -1;
	size_t even = 0;

	if (!array)
		return (-1);
	i = 0;

	if (size % 2 != 0)
		even = 1;
	mid = size / 2;

	printf("Searching in array: ");
	for (i = 0; i < size - 1; i += 1)
		printf("%i, ", array[i]);
	printf("%i\n", array[i]);

	if (array[mid] == value)
		return (mid);
	else if (size <= 1)
		return (index);

	if (array[mid] > value)
	{
		index = binary_search(array, size - mid, value);
	}
	else if (array[mid] < value)
	{
		index = binary_search(array + mid + even, size - mid - even, value);
	}

	return (index);
}
