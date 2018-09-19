#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int result;

	n = 3;
	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			result += n;
		n += 1;
	}
	printf("%d\n", result);
	return (0);
}
