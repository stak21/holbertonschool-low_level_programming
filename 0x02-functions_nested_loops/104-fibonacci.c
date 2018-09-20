#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int j;
	unsigned long int k;
	unsigned long int l;

	j = 3;
	k = 2;
	printf("1, 2, ");
	for (i = 3; i < 98; i += 1)
	{
		l = j;
		j += k;
		printf("%lu", j);
		if (i != 98)
			printf(", ");
		k = l;
	}
	printf("\n");
return (0);
}
