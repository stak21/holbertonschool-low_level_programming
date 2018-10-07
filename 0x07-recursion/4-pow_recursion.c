#include <stdio.h>
#include "holberton.h"

/**
* _pow_recursion - a functino that returns the power of x to the y
* @x: the base
* @y: the power
* Return: the result
*/

int _pow_recursion(int x, int y)
{

	if (y > 0)
		return(x * _pow_recursion(x, y - 1));
	else if (y < 0)
		return (-1);
	else
		return (1);

}
