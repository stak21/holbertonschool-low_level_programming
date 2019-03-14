#include <stdio.h>
#include <stdbool.h>
#include "holberton.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: holds the string
* @accept: holds the set of bytes
* Return: the pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	bool found;

	found = false;
	i = 0;

	while (!found && s[i])
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				return ((s + i));
			j += 1;
		}
		i += 1;
	}
	return (NULL);
}
