#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* main - Entry point
* @argc: holds the number of arguments passed in
* @argv: holds the strings of the arguments passed in
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	int i;
	int j;
	int result;

	j = 0;
	result = 0;
	while (--argc)
	{
		i = 0;
		while (argv[j + 1][i])
		{
			if (!(argv[j + 1][i] >= '0' && argv[j + 1][i] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			i += 1;
		}
			result += atoi(argv[j + 1]);
		j += 1;
	}
	printf("%i\n", result);
	return (0);
}
