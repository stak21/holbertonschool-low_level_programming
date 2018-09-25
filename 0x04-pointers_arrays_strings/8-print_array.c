#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of itegers
 * @a: the array
 * @n: the number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i += 1)
	{
			printf("%d", a[i]);
			if (i != n - 1)
				printf(", ");
	}
}
