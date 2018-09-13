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
	int k;

	for (i = 48; i <= 55; i += 1)
	{
		for (j = i + 1; j <= 56; j += 1)
		{
			for (k = j + 1; k <= 57; k += 1)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
