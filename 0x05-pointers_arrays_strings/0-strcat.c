#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i += 1;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j += 1;
		i += 1;
	}
	return (dest);
}
