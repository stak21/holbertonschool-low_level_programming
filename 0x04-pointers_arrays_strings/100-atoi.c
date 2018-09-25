#include "holberton.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * _atoi - converts a string to an integer
 * @s: holds the string to convert
 *
 * Return: the integer
 */

/*
 * while ! null
 * look for a number
 * increment i
 * once found look for a string
 *at the same time
 *set j to i
 * keep incrementing i until its not a nnumber
 * after that use a for loop to go form i to j
 * 'i' - j * 1 - 1xx depending on multiple which is j - i
 */
int _atoi(char *s)
{
	int i;
/*	int j;
	unsigned int result;
	int temp;
	bool isfirstnumber = false;
*/
int result;
	i = 0;
//	j = 1;
	result = 0;
	printf("%d", i);
	while (s[i] != '\0')
	{
	/*
		if (s[i] >= '0' && s[i] <= 9)
		{
		_putchar(s[i]);
			isfirstnumber = true;
			temp = s[i] - '0';
			result += result * j + temp;
			j *= 10;
		}
		if (s[i] < '0' && s[i] > '9')
			if (isfirstnumber == true)
				break;
				*/
				printf("%i", i);
				i += 1;
	}
	return (result);
}
