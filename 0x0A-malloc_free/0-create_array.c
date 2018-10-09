#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* create_array - Creates an array of chars and initializes it
* @size: holds the size of the array to create
* @c: holds the character to initialize it with
* Return: a pointer to the array or Null
*/

char *create_array(unsigned int size, char c)
{
	char *ret_arr;
	unsigned int i;

	ret_arr = malloc(size * sizeof(char));
	for (i = 0; i < size; i += 1)
		ret_arr[i] = c;

	return (ret_arr);
}
