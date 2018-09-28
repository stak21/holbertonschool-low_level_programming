#include <stdio.h>
#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: holds a string
 * @s2: holds a string
 *
 * Return: 1 if true
 * otherwise 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		{
			i += 1;
		}
	return (s1[i] - s2[i]);
}
