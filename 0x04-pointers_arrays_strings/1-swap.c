#include "holberton.h"

/**
 * swap_int - swaps two integers
 * @a: holds a value
 * @b: holds a value
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
