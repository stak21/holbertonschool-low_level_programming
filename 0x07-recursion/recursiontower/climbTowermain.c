#include <stdio.h>
#include "holberton.h"

/**
	* main - Entry point
	*
	* Return: Always 0 (Success)
	*/
	
int main(void)
	{
		printf("\n\n* We are at the top floor right now, we are about to enter a dungeon\n");
		printf("* Each floor has a piece of coin and we will go down a floor until we find\nthe treasure room\n\n");
		printf("\n* We finally are back!\nWe climbed 4 levels and found the treasure room.\nWe also found %i pieces of treasure\n\n", climbTower(0)); /*We are climbing the tower here */
		return (0);
	}
