#include <stdio.h>
#include "holberton.h"

/**
* is_prime_number - checks if the number is prime
* @n: holds the number
* Return: returns true or false
*/

int is_prime_number(int n)
{
	int actual_is_prime(int, int);
	if (n <= 1)
		return (0);
	return (actual_is_prime(n, 2));
}

/**
* actual_is_prime - helper function
* @n: holds the number
* @mod: the modding number
* Return: true or false
*/

int actual_is_prime(int n, int mod)
{
	if (mod >= n)
		return (1);
	else if (n % mod == 0)
		return (0);
	else
		return (actual_is_prime(n, mod + 1));
}
