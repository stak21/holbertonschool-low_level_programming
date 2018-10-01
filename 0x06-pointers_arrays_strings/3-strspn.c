#include <stdio.h>
#include "holberton.h"

/**
* _strspn - gets the length of a prefix substring
* @s: holds the string to look into
* @accept: holds the substring of characters to compare to
* Return: the number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int index;

	count = 0;
	index = 0;
	while (*s > 'a' && *s < 'z')
	{
		while (accept[index])
		{
			if (accept[index] == *s)
			{
				count += 1;
			}
			index++;
		}
		index = 0;
		s++;
	}
	return (count);
}
