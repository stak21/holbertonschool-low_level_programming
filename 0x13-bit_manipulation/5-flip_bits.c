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
	unsigned int count, difference;

	count = 0;
	difference = n ^ m;
	while (difference)
	{
		if ((difference & 1) == 1)
			count += 1;
		difference >>= 1;
	}
		
	return (count);
}
