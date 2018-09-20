#include "holberton.h"

/**
 * print_triangle - prints a triangle depending on the size
 * @size: the size of the triangle
 *
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i += 1)
		{
			for (j = size - i - 1; j > 0; j -= 1)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k += 1)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
