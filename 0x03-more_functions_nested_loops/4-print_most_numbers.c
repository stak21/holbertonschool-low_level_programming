#include "holberton.h"

/**
 * print_most_numbers - prints most numbers
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i += 1)
	{
		if (i != 2 || i != 4)
			_putchar(i);
	}
}
