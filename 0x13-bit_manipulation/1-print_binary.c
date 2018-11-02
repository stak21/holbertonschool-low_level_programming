#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* print_binary - prints a binary representation of a number
* @n: holds the number to change
*/

void print_binary(unsigned long int n)
{
	if ((n >> 1) == 0 && n == 0)
	{
		_putchar('0');
		return;
	}
	if (n >> 1 != 0)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');

}
