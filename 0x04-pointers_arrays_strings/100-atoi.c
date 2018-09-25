#include "holberton.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * _atoi - converts a string to an integer
 * @s: holds the string
 *
 *Returns: the integer
 */
int _atoi(char *s)
{
	int i;
	int result;
	int digit;
	bool isfirstnumber = false;
	bool negative = false;

	i = 0;
	result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			if (negative)
				negative = false;
			else
				negative = true;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			isfirstnumber = true;
			digit = s[i] - '0';
			result = result * 10 + digit;
		}
		if (s[i] < '0' || s[i] > '9')
			if (isfirstnumber)
				break;
		i += 1;
	}
	if (negative)
		return (-result);
	return (result);
}
