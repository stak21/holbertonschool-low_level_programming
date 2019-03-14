#include <stdio.h>
#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: the destination to cpy to
 * @src: the src to cpy form
 * @n: the number of characters to cpy
 *
 * Return: the pointer to the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j += 1;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j += 1;
	}
	return (dest);
}
