#include <stdio.h>
#include <stdbool.h>
#include "holberton.h"

/**
* _strstr - locates a substring
* @haystack: the string
* @needle: the substring
* Return: pointer to the beginning of the located substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			j += 1;
		}
		if (needle[j] == '\0')
			return ((haystack + i));
		i += 1;
	}
	return (needle);
}
