#include <stdio.h>
#include "holberton.h"

/**
 * *_strncpy - copies a string
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
	dest[i] = '\0';
	return (dest);
}
