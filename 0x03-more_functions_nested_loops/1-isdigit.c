#include <unistd.h>
#include "holberton.h"

/**
 * _isdigit - checks to see if a character is a digit
 * @c: holds the chracter to check
 *
 * Return: 1 if it is a digit
 * otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
