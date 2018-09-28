#include <stdio.h>
#include "holberton.h"

/**
 * char *_strcat(char *dest, char *src)
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = j = 0;
	while (dest[i] != '\0')
		i += 1;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j += 1;
		i += 1;
	}
return (dest);
}
