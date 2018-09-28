#include <stdio.h>
#include "holberton.h"

/**
 * _strcat - catcatenates strings
 * @dest: the destination to cat to
 * @src: the src to cat from
 *
 * Return: the pointer to the character
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
