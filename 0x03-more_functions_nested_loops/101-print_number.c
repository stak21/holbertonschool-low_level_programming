#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: holds the number to print
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;
	if (i >= 10)
	{
		print_number(i / 10);
	}

	_putchar(i % 10 + '0');
}
