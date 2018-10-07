#include <stdio.h>

/**
	* main - Entry point
	*
	* Return: Always 0 (Success)
	*/
	
int main(int argc, int **argv)
	{
		printf("%s", *argv++);
		return (0);
	}
