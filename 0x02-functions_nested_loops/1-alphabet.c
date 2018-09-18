#include "holberton.h"
#include <unistd.h>

/**
 * print_alphabet - prints alphabet in lowercase with a newline
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i += 1)
	{
		_putchar(i);
	}
	_putchar('\n');
}
