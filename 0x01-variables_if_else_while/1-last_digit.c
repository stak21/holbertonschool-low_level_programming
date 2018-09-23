#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	d = n % 10;
	printf("Last digit of %d is %d and", n, d);

	if (d > 5)
	  {
	    printf(" is greater than 5\n");
	  }
	else if (d == 0)
	  {
	    printf(" is zero\n");
	  }
	else
	  printf(" is less than 6 and not 0\n");

	return (0);
}
