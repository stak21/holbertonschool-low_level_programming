#include "holberton.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - prints the alphabet 10x in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i += 1)
	{
		for (c = 'a'; c <= 'z'; c += 1)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
