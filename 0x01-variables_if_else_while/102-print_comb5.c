#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int num2;

	for (num = 0; num < 100; num += 1)
	{
		for (num2 = num + 1; num2 < 100; num2 += 1)
		{
			putchar(num / 10 + '0');
			putchar(num % 10 + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');

			if (num != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
