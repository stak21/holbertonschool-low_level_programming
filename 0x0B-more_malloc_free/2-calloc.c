#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* _calloc - allocates memory with nmemb elements of a certain type
* @nmemb: holds the number of elements in an array
* @size: holds the size of type of an array
* Return: null if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ret_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ret_ptr = malloc(size * nmemb);
	if (ret_ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i += 1)
		ret_ptr[i] = 0;
	return (ret_ptr);
}
