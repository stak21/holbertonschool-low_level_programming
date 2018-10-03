#include <stdio.h>
#include "holberton.h"

/**
* factorial - returns the factorial of a given number
* @n: the factorial
* Return: the factorial
*/

int factorial(int n)
{
	int fac;

	if (n > 0)
		fac = n * factorial(n - 1);
	else if (n < 0)
		return (-1);
	else
		return (1);
	return (fac);
}
