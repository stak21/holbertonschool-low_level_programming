#include <stdio.h>
#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements in an array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int half;

	n--;
	half = n / 2;
	for (i = 0; i < half; i += 1)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
