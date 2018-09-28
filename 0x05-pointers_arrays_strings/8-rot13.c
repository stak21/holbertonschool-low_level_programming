#include <stdio.h>
#include "holberton.h"

/**
 * rot13 - encodes and decodes in rot13
 * @s: holds the string
 * Return: returns the pointer to the string
 */

char *rot13(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
	while ((s[i] < 'n' && s[i] >= 'a') || (s[i] >= 'A' && s[i] < 'N'))
	{
		s[i] = s[i] + 13;
		i += 1;
	}
	if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
		s[i] = s[i] - 13;

	i += 1;
}
return (s);
}
