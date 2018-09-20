#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int j;
	unsigned long int k;
	unsigned long int l;

	i = 2;
	j = 3;
	l = 2;
	while (j < 4000000)
	{
		k = j;
		j += i;
		if (j % 2 == 0)
		{
			l += j;
		}
		i = k;
	}
	printf("%lu\n", l);
	return (0);
}
