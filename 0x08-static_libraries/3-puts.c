#include "holberton.h"

/**
 * _puts - prints a string to stdout
 * @s: holds the string to print
 */
void _puts(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i += 1;
	}
	_putchar('\n');
}
