#include <stdio.h>
#include "holberton.h"

/**
* _strlen_recursion - returns the length of a string
* @s: holds the string
* Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	int x;
	if (*s == '\0')
	{
		printf("This will print on the last case\n\n");
		return (0);
	}
	if (*s != '\0')
	{
		printf("\nthis happens first and x = nothing\n");
		x = (1 + _strlen_recursion(s + 1));
		printf("x: %i\n", x);
		return (x);
	}
	else
		return (0);
}
