#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* array_range - creates an array of integers
* @min: holds the minimum amount of values
* @max: holds the maximum amount of values
* Return: returns a pointer to the array
*/

int *array_range(int min, int max)
{
	int *ret_ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ret_ptr = malloc(sizeof(int) * size);
	if (ret_ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i += 1)
	{
		ret_ptr[i] = min + i;
	}
	return (ret_ptr);
}
