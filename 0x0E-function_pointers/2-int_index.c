#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - seraches for an integer in an array
* @array: the array holding the integer
* @size: holds the size of the array
* @cmp: the function pointer to a compare
* Return: 0: found, 1: not -1 not found
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i += 1;
	}
	return (-1);
}
