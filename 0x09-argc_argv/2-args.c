#include <stdio.h>
#include "holberton.h"

/**
* main - Entry point
* @argc: unused
* @argv: contains the strings for passed in arguments
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	while (argc--)
	printf("%s\n", *argv++);
	return (0);
}
