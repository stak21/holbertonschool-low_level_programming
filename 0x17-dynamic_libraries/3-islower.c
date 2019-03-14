#include <stdio.h>
#include "holberton.h"

/**
* islower - checks if its lowercase
* @c: holds the character
* Returns: true or false
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
