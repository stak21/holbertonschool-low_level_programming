#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;
	int l = 49;

	while (i <= 57)
	{
		while (j <= 57)
		{
			while (k <= 57)
			{
				while (l <= 57)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56 || k != 57 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
					l += 1;
				}
				k += 1;
				l = j;
			}
			j += 1;
			k = i;
		}
		j = 48;
		i += 1;
	}
	putchar('\n');

	return (0);
}
