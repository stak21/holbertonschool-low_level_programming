#include <stdio.h>
#include "holberton.h"

/**
 * _memset - sets n bytes of an area with bytes
 * @s: holds the pointer
 * @b: the byte to change to
 * n: the number of addresses to change
 * Return: the pointer to the address
 */
	
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i += 1)
		*(s + i) = b;
	return (s);
}
