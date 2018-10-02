#include <stdio.h>
#include "holberton.h"

/**
* print_diagsums - prints the sum of the two diagonals of a square matri
* @a: holds the matrix
* @size: holds the size
*/

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int result1;
	int result2;

	i = j = result1 = result2 = 0;
	for (; i < size * size; i += size + 1)
	{
		j += size - 1;
		result1 += a[i];
		result2 += a[j];
	}
	printf("%d, %d\n", result1, result2);
}
