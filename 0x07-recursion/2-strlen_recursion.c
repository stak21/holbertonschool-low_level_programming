#include <stdio.h>
#include "holberton.h"

/**
* _strlen_recursion - returns the length of a string using recursion
* @s: holds the string
*/

int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		len = _strlen_recursion(++s);
		len++;
	}
	return (len);
}
