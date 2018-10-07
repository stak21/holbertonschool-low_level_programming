#include <stdio.h>
#include "holberton.h"

/**
* main - Entry point
* @argc: holds the number of arguments passed in
* @argv: unused
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
