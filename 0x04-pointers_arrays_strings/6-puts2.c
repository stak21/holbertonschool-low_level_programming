#include "holberton.h"

/**
 * puts2 - prints one char out of 2
 * @str: holds the string
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
