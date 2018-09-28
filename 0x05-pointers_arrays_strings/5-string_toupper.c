#include <stdio.h>
#include "holberton.h"

/**
 * *string_toupper - changes all lowercase letters to upper
 * Return: the string
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while(n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
		n[i] = n[i] - 'a' + 'A';
		}
		i++;
	}

	return(n);
}
