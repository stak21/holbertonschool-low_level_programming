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
	n--;
	for (i = 0; i < n /2; i += 1)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
