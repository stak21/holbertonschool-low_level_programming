#include <stdio.h>
#define UNUSED(argc)
/**
	* main - Entry point
	* @argc: unused
	* @argv: holds the string of the program name
	* Return: Always 0 (Success)
	*/

int main(int argc, char **argv)
	{
		printf("%s", *argv++);
		(void)argc;
		printf("\n");
		return (0);
	}
