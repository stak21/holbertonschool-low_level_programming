#include <stdio.h>
#include "holberton.h"

/**
* _strlen_recursion - returns the length of a string
* @s: holds the string
* Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
