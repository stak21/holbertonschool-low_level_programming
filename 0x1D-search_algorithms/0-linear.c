#include <stdio.h>
#include <stdlib.h>

#include "search_algos.h"

/**
* linear_search - Function: searches for an array of integers using Linear
* search algorithm
*
* @array: The array to search in
* @size: The size of the array
* @value: The value to search for
*
* Return: The index of the value
* else -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index = -1;

	if (!array)
		return (-1);
	for (i = 0; i < size && array[i] != '\0' && index == -1; i += 1)
	{
		if (array[i] == value)
			index = i;
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
	}

	return (index);
}
