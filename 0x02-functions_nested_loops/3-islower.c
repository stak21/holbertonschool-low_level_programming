#include "holberton.h"
#include <unistd.h>
/**
 * _islower - checks for lowercase character
 * @c: the number to check
 *
 * Description: c holds the character to check
 *
 * Return: 1 for lowercase
 * otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	return (0);
}

