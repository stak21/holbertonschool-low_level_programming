#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* main - Entry point
* @argc: unused
* @argv: holds the strings to the arguments
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	if (argc >= 3)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
