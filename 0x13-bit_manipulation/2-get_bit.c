#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* get_bit - gets the value of a bit at a given index
* @n: holds the number to check
* @index: the index to check
* Return: returns the value of the bit
* otherwise -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
