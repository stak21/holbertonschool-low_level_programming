#include <stdio.h>
#include "holberton.h"
#include <stdbool.h>
/**
 * *cap_string - captializes all words in a string
 * @s: holds a string
 * Return: the pointer to the string (Success)
 */

char *cap_string(char *n)
{
	bool firstLetter;
	int i;

	i = 0;
	firstLetter = true;
	while (n[i] != '\0')
	{
		
		while ((n[i] >= '0' && n[i] <= '9') || (n[i] >= 'a' && n[i] <= 'z') || (n[i] >= 'A' && n[i] <= 'Z') || n[i] == '-')
		{
			if (firstLetter && n[i] >= '0' && n[i] <= '9') 
			{
				firstLetter = false;
			}
			else if (firstLetter && n[i] >= 'A' && n[i] <= 'Z')
					firstLetter = false;
			if (firstLetter)
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

