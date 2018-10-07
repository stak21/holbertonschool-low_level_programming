#include "holberton.h"
#include <unistd.h>

/**
 * _abs - gets the absolute value of an integer
 * @n: holds integer to get abs of
 * Return: returns the absoulte number
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	return (n);
}
