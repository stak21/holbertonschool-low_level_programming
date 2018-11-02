#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: holds the pointer to a number
* @index: the index to set
* Return: 1 if it worked
* otherwise -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return (*n |= (1 << index));
	return (1);
}
