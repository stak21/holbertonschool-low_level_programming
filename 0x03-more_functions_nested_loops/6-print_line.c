#include "holberton.h"

/**
 * print_line - prints a straight line
 * @n: holds the number of times the line should be printed
 *
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i += 1)
	{
		_putchar('_');
	}
	_putchar('\n');
}
