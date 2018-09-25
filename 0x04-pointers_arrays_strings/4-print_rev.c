#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: holds the string
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
		i += 1;
	for (; i >= 0; i -= 1)
		_putchar(s[i]);
}
