#include "holberton.h"
#include <unistd.h>

/**
 * print_last_digit - prints the last digit
 * @n: holds the digit to print the last digit of
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
	{
		n = -n;
	}
	d = n % 10;
	_putchar(d + '0');
	return (d);
}