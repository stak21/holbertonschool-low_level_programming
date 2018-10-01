#include <stdio.h>
#include "holberton.h"

/**
* _strchr - locates a character in a string
* @s: holds teh string
* @c: holds the character to look for
* Return: returns the index of the occurance
* otherwise returns null
*/

char *_strchr(char *s, char c)
{
	int index;

	index = 0;
	while (s[index] != c && s[index])
	{
		index += 1;
	}
	if (s[index] != '\0')
	{
		return ((s + i));
	}
	else
	{
		return (NULL);
	}
}
