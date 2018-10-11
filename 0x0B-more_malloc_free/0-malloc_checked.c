#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* malloc_checked - allocates memory
* @b: holds the integer for the amount of space to reserve
* Return: the pointer to the new memory
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *ret_ptr;
	ret_ptr = malloc(b);
	if (ret_ptr == NULL)
		exit(98);
	return (ret_ptr);
}
