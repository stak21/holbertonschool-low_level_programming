#include <stdio.h>
#include <stdbool.h>
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
	bool found;

	count = 0;
	do {
		index = 0;
		found = false;
		while (accept[index])
		{
			if (accept[index] == *s)
			{
				found = true;
				count += 1;
			}
			index += 1;
		}
		if (found)
			s++;
	} while (found);
	return (count);
}
