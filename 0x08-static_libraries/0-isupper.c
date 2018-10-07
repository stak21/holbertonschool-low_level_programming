#include "holberton.h"
#include <unistd.h>
/**
 * _isupper - check if a character is uppercase
 * @c: holds the character to check
 *
 * Return: 1 if its upper
 * otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
