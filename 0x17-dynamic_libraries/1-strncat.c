#include <stdio.h>
#include "holberton.h"

/**
 * _strncat - cat only n str
 * @dest: the dest to cat to
 * @src: the src to cat from
 * @n: the number of people
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
