#include "holberton.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
  int i;
  int j;
  int d;

  if (n >= 0 && n <= 15)
    {
      for (j = 0; j <= n; j += 1)
	{
	  for (i = 0; i <= n; i += 1)
	    {
	      d = i * j;
	      if ((d / 10) != 0)
		{
		  _putchar(d / 10 + '0');
		}
	      else
		_putchar(' ');
	      _putchar(d % 10 + '0');
	      if (i != n)
		{
		  _putchar(',');
		  _putchar(' ');
		  _putchar(' ');
		  _putchar(' ');
		}
	    }
	  _putchar('\n');
	}
    }
}
