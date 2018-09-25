#include "holberton.h"

/**
 * *_strcpy - copies the string pointed by src including the null, to the dest
 * @dest: the destination to copy to
 * @src: the source to copy from
 * Return: value: the pinter to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i += 1;
	}
	return (dest);
}
