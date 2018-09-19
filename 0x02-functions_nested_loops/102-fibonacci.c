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

	j = 2;
	k = 3;
	printf("1, 2, 3, ");
	for (i = 3; i < 50; i += 1)
	{
		j += k;
		printf("%lu", j);
		if (i != 49)
			printf(", ");
		k = j;
	}
	printf("\n");
	return (0);
}
