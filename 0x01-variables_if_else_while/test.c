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
	int l;
	int m;

	for (i = 48; i <= 57; i += 1)
	{
		for (j = 48; j <= 56; j += 1)
		{
			for (k = 48; k <= 57; k += 1)
			{
				for (l = j + 1; l <= 57; l += 1)
				{
				  if (l == 1
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 i|| j != 56 || k != 57 || l != 57)
					  {
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}