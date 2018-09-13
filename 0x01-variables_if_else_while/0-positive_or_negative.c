#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%li is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%li is zero\n", n);
	}
	else
	{
		printf("%li is negative\n", n);
	}

	return (0);
}
