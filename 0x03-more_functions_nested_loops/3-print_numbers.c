#include "holberton.h"

/**
 * print_numbers - prints numbers 0-9
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i += 1)
	{
		_putchar(i + '0');
	}
}
