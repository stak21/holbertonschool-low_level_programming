#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* _realloc - reallocates a memory area frmo the old size to the new size
* @ptr: holds the memory address to a previously allocated space
* @old_size: holds the number of space allocated previously
* @new_size: holds the number of spaces we need to allocate from the previous
* Return: a void pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ret_ptr;
	int i;
	int len;

	i = 0;
	len = new_size - old_size;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ret_ptr = malloc(new_size);
	if (ret_ptr == NULL)
		return (NULL);
	if (!len)
		len = -len;
	while (i <= len)
	{
		*((char *)ret_ptr + i) = *((char *)ptr + i);
		i += 1;
	}
	free(ptr);
	return (ret_ptr);
}
