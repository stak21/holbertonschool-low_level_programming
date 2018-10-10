#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* alloc_grid - return a pointer to a 2 dimen array
* @width: holds the integer for width
* @height: holds the integer for height
* Return: return a pointer to the array otherwise return NULL
*/

int **alloc_grid(int width, int height)
{
	int **ret_ptr;
	int i;
	int j;
	if (height <= 0 || width <= 0)
		return (NULL);
	ret_ptr = malloc(sizeof(void *) * height);
	if (ret_ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i += 1)
	{
		ret_ptr[i] = malloc(sizeof(int) * width);
		if (ret_ptr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j += 1)
			ret_ptr[i][j] = 0;
	}
	return (ret_ptr);
}
