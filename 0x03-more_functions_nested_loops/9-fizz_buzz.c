#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i += 1)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
