#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* _strdup - returns apointer to the newly allocated memory
* @str: holds the string
* Return: the pointer
*/

char *_strdup(char *str)
{
	char *ret_ptr;
	int i;
	int j;

	j = 0;
	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
		i += 1;
	ret_ptr = malloc(i * sizeof(char) + 1);

	if (ret_ptr == NULL)
		return (NULL);
	while (*str)
	{
		ret_ptr[j] = *str;
		str++;
		j += 1;
	}
	ret_ptr[j] = *str;
	printf("%i%i\n", i, j);
	return (ret_ptr);
}
