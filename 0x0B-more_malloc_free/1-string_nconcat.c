#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* string_nconcat - concatentates two strings using the newly allocated memory
* @s1: holds the first string
* @s2: holds the second string
* @n: holds the unsigned number of characters to concatenate
* Return: a pointer to the new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len, i;
	unsigned int j;
	char *ret_ptr;

	len = 0;
	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len])
		len += 1;
	ret_ptr = malloc(len + n + 1);
	if (ret_ptr == NULL)
		return (NULL);
	while (s1[i])
	{
		ret_ptr[i] = s1[i];
		i += 1;
	}

	while (j < n)
	{
		ret_ptr[i + j] = s2[j];
		j += 1;
	}
	ret_ptr[i + j] = '\0';
	return (ret_ptr);
}
