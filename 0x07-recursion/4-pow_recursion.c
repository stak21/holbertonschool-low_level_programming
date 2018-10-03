#include <stdio.h>
#include "holberton.h"

/**
* _pow_recursion - a functino that returns the power of x to the y
* @x: the base
* @y: the power
*/

int _pow_recursion(int x, int y)
{
	int result;

	if (y > 0)
		result = _pow_recursion(x, y - 1);
	else if (y < 0)
		return (-1);
	else
		return (1);
	return (x * result);

}
