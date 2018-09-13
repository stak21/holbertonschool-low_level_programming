#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i += 1)
	{
		for (j = 48; j <= 57; j += 1)
		{
			putchar(i);
			putchar(j);
			if (j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
