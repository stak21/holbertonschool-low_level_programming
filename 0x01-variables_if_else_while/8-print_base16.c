#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = '1'; ch <= '9'; ch += 1)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch += 1)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
