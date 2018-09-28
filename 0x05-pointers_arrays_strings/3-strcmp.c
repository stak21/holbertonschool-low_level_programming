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
	return (*s1 - *s2);
}
