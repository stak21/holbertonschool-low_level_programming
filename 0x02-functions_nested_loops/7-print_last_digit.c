#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 * @n: contains the number
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
	{
		n *= -1;
	}
	d = n % 10;
	_putchar(d + '0');
	return (d);
}
