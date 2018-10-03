#include <stdio.h>
#include "holberton.h"

/**
* is_palindrome - checks if a string is palindrome
* @s: holds the string
*/

int is_palindrome(char *s)
{
	int len;

	int get_len(char *s);
	int actually_is_palin(char *s, int);

	len = get_len(s) - 1;
	return (actually_is_palin(s, len));
}

int get_len(char *s)
{
	if (*s != '\0')
		return (1 + get_len(s + 1));
	else
		return (0);
}

int actually_is_palin(char *s, int len)
{
	if (len > 0)
	{
		if (*s == *(s + len))
		{
			len -= 1;
			actually_is_palin(s + 1, len);
		}
		else
			return (0);
	}
	return (1);
}
