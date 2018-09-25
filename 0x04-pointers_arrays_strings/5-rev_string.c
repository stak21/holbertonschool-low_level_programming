#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: holds a string
 */

void rev_string(char *s)
{
	int i;
	int j;
	char temp;

	i = 0;
	while (s[i] != '\0')
		i += 1;

	for (j = 0; j < i; j += 1)
	{
		i -= 1;
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
