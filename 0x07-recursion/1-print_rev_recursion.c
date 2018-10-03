#include <stdio.h>
#include "holberton.h"

/**
* _print_rev_recursion - prints a string in reverse using recursion
* @s: holds the strin gto reverse
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}

