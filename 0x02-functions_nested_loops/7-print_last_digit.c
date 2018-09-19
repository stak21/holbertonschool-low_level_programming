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


	d = n % 10;
	if (d < 0)
	{
		d *= -1;
	}
	_putchar(d + '0');
	return (d);
}
