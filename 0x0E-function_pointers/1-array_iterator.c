#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - Iterates through an array and executes a function on it
* @array: holds the array to iterate through
* @size: holds the size of the array
* @action: a function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i += 1;
	}
}
