#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i += 1)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
