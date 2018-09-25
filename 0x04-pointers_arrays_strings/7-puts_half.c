#include "holberton.h"

/**
 * puts_half - prints half of a string followed by a newline
 * @str: holds the string
 */

void puts_half(char *str)
{
	int fast;
	int slow;

	fast = 0;
	slow = 0;
	while (str[fast] != '\0')
	{
		fast += 2;
		slow += 1;
	}
	while (str[slow] != '\0')
	{
		_putchar(str[slow]);
		slow += 1;
	}
	_putchar('\n');
}
