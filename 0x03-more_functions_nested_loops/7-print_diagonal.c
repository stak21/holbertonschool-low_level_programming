#include "holberton.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: holds the number of times to print diagonal
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i += 1)
		{
			for (j = i; j > 0; j -= 1)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
