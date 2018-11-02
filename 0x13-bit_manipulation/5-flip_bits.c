#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* flip_bits - returns the number of bits you would need to flip to get fmor one
* number to another
* @n: the number
* @m: the 2nd number
* Return: the count
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count, difference;

	difference = n ^ m;
	count = 0;
	for (count = 0; difference != 0; count += 1)
		difference &= (difference - 1);
	return (count);
}
