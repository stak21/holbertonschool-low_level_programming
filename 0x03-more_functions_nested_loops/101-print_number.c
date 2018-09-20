#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: holds the number to print
 */

void print_number(int n)
{
	int div;

	div = 1;
	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (div <= n)
	{
		div *= 10;
	}
	div /= 10;
	while (div != 0)
	{
		_putchar(n / div + '0');
		n %= div;
		div /= 10;
	}
}
