#include <stdio.h>
#include "holberton.h"

/**
* print_chessboard - prints the chessboard
* @a: holds the range of characters to print
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i += 1)
	{
		for (j = 0; j < 8; j += 1)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
