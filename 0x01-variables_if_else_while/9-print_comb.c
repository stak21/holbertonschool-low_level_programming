#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch += 1)
	{
		if (ch != '9')
		{
			putchar(ch);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
