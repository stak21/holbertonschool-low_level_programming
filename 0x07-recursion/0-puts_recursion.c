#include <stdio.h>
#include "holberton.h"

/**
* _puts_recursion - prints a string in recursion
* @s: holds the string to print
*/

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
		_puts_recursion(++s);
	else
		_putchar('\n');
}
