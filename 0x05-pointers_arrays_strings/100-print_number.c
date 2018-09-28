#include <stdio.h>
#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: holds the number to print
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;

	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
