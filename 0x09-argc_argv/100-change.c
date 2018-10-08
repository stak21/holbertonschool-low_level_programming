#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* main - Entry point
* @argc: holds the number of arguments
* @argv: holds the character for change
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	int mkC(int);
	if (argc == 2)
		printf("%i\n", mkC(atoi(argv[1])));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

/**
* mkC - creates change
* @c: - the change amount
* Return: the number of coins needed to equal the change
*/

int mkC(int c)
{
	if (c < 0)
	{
		return (0);
	}
	if (c == 0)
		return (0);
	if (c % 25 != c)
		return (1 + mkC(c - 25));
	else if (c % 10 != c)
		return (mkC(c - 10) + 1);
	else if (c % 5 != c)
		return (1 + mkC(c - 5));
	else
		return (c);
}
