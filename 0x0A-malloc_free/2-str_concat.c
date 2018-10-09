#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* str_concat - concats two strings
* @s1: holds the first string
* @s2: holds the second string
* Return: the pointer to a string
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	char *ret_ptr;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i])
		i += 1;
	while (s2[j])
		j += 1;
	ret_ptr = malloc((i + j) * sizeof(char) + 1);
	while (*s1)
	{
		ret_ptr[k] = *s1++;
		k += 1;
	}
	while (*s2)
	{
		ret_ptr[k] = *s2++;
		k += 1;
	}
	return (ret_ptr);
}
