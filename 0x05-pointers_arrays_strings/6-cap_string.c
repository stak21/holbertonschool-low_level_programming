#include <stdio.h>
#include "holberton.h"
#include <stdbool.h>
/**
 * *cap_string - captializes all words in a string
 * @n: holds a string
 * Return: the pointer to the string (Success)
 */

char *cap_string(char *n)
{
	int isNum(char);
	int isAlpha(char);
	bool firstLetter;
	int i;

	i = 0;
	firstLetter = true;
	while (n[i] != '\0')
	{
		while (isNum(n[i]) || isAlpha(n[i]) || n[i] == '-')
		{
			if (firstLetter && isNum(n[i]))
			{
				firstLetter = false;
			}
			else if (firstLetter && n[i] >= 'A' && n[i] <= 'Z')
				firstLetter = false;
			if (firstLetter && n[i] != '-')
			{
				firstLetter = false;
				n[i] = n[i] - 'a' + 'A';
			}
			i += 1;
		}
		firstLetter = true;
		i += 1;
	}
return (n);
}
/**
 * isNum - checks if its a number
 * @c: holds the character
 * Return: 1 if its true
 * otherwise 0
 */
int isNum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/**
 * isAlpha - checks if its alpha
 * @c: holds the character
 * Return: 1 if its true
 * otherwise 0
 */
int isAlpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
