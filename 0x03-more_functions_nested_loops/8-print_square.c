#include "holberton.h"

/**
 * print_square - prints a square depending on the size
 * @size: the size of the square
 *
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i += 1)
		{
			for (j = 0; j < size; j += 1)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
