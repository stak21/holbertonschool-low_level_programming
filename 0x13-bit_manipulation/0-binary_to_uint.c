#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* binary_to_uint - converts a binary to the int
* @b: points to a string of 0 and 1
* Return: an unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, integer;

	integer = 0;
	i = 0;
	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		integer <<= 1;
		if (b[i] & 1)
			integer += 1;
		i += 1;
	}
	return (integer);
}
