#include <stdio.h>
#include "holberton.h"

/**
 * leet - encodes a string into leet
 * @s: holds the string
 *
 * Return: the pointer to the string
 */

char *leet(char *s)
{
	int i, k;
	char array[10][2] = {
	{'a', 4 + '0'}, {'A', 4 + '0'},
	{'e', 3 + '0'}, {'E', 3 + '0'},
	{'t', 7 + '0'}, {'T', 7 + '0'},
	{'o', '0'}, {'O', '0'},
	{'l', 1 + '0'}, {'L', 1 + '0'}
	};

	k = 0;
	while (s[k] != '\0')
	{
		i = 0;
		while (array[i][0] != '\0')
		{
			if (s[k] == array[i][0])
				s[k] = array[i][1];
			i += 1;
		}
		k += 1;
	}
	return (s);
}
