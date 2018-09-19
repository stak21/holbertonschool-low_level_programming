#include "holberton.h"
#include <unistd.h>

/**
 * print_times_table- prints inputed times table
 * @n: holds the number for the times table
 *
 */

void print_times_table(int n)
{
	int i;
	int j;
	int k;
	int d;
	int s;
	int a;
	if (n >= 0 && n <= 15)
	{
		for (j = 0; j <= n; j += 1)
		{
			for (i = 0; i <= n; i += 1)
			{
						d = i * j;
						if (d >= 100)
						{
							k = d / 10 / 10;
							a = d % 10;
							s = d / 10 % 10;	
							_putchar(k + '0');
							_putchar(s + '0');
							_putchar(a + '0');
						}
						else
						{
							if (d > 0)
							{
								_putchar(' ');
								_putchar(d / 10 + '0');
							}
							else if (i != 0)
							_putchar(' ');
							if (j == 0 && i != 0)
						      _putchar(' ');
							_putchar(d % 10 + '0');
						}
						if (i != n)
						{
							_putchar(',');
							_putchar(' ');
						}
			}
			_putchar('\n');
		}
	}
}
