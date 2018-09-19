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
		 _putchar('0');
			for (i = 1; i <= n; i += 1)
			{
						d = i * j;
						_putchar(',');
						_putchar(' ');
						if (d >= 100) /* triple digits */
						{
							k = d / 10 / 10;
							a = d % 10;
							s = d / 10 % 10;	
							_putchar(k + '0');
							_putchar(s + '0');
							_putchar(a + '0');
						}
						else if (d >= 10 && d < 100) /* double digit */
						{
						  k = d / 10;
						  a = d % 10;

						  _putchar(' ');
						  _putchar(k + '0');
						  _putchar(a + '0');
						}
						else /*single digit */
						{
							 _putchar(' ');
							 _putchar(' ');
							 _putchar(d % 10 + '0');
						}
			}
			_putchar('\n');
		}
	}
}
