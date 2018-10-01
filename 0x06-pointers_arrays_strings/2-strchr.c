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
	while (*s != c && *s)
	{
		s++;
	}
	if (*s)
		return (s);
	else
		return ('\0');
}
