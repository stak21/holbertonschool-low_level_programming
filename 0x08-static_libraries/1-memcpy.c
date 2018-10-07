#include <stdio.h>
#include "holberton.h"

/**
 * _memcpy - copies the byes from an address and yanks it to dest
 * @dest: the destination to copy to
 * @src: the source to copy from
 * @n: the number of characters to copy
 * Return: the pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i += 1)
	dest[i] = src[i];
	return (dest);
}
