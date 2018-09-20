#include <stdio.h>
#include <stdbool.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long long int n;
	long long int i;
	long int result;

	n = 612852475143;
	i = 2;
	while (n != 1)
	{
			if (n % i == 0)
			{
				result = i;
				n /= i;
			}
			else
				i += 1;
	}
	printf("%li\n", result);
	return (result);
}
