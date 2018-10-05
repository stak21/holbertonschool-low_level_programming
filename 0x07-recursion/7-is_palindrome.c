#include <stdio.h>
#include "holberton.h"

/**
* is_palindrome - checks if a string is palindrome
* @s: holds the string
* Return: true or false
*/

int is_palindrome(char *s)
{
	int len;

	int get_len(char *s);
	int actually_is_palin(char *s, int, int);

	len = get_len(s) - 1;
	return (actually_is_palin(s, len, 0));
}
/**
* get_len - gets the length of the string
* @s: holds the string to check
* Return: the length
*/

int get_len(char *s)
{
	if (*s != '\0')
		return (1 + get_len(s + 1));
	else
		return (0);
}
/**
* actually_is_palin - helper function for actually is palin
* @s: the pointer to the string
* @len: holds the length of the string
* @start: holds the beginning of the string
* Return: true or false
*/

int actually_is_palin(char *s, int len, int start)
{
	if (len > start)
	{
		if (s[start] == s[len])
		{

			len -= 1;
			start += 1;
			return (actually_is_palin(s, len, start));
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
