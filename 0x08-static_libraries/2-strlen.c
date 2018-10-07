#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i += 1;
	return (i);
}
