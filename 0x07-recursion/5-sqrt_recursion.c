#include <stdio.h>
#include "holberton.h"

/**
* _sqrt_recursion - return the sqrt of a number
* @n: the number to sqrt
* Return: the sqrt number
*/

int _sqrt_recursion(int n)
{
	int actual_sqrt(int, int);
	if (n < 0)
		return (-1);
	return (actual_sqrt(1, n));
}

/**
* actual_sqrt - a helper function
* @i: incremental number
* @cmp: holds the main number
* Return: sqrt or -1
*/
int actual_sqrt(int i, int cmp)
{
	int result;

	if (i * i == cmp)
	{
		result = i;
	}
	else if (i > cmp)
	{
		return (-1);
	}
	else
	{
		result = actual_sqrt(i + 1, cmp);
	}
	return (result);
}
