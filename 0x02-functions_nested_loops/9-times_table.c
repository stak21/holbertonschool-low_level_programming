#include "holberton.h"
#include <unistd.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
  int i;
  int j;
  int d;

  for (i = 0; i <= 9; i += 1)
    {
      for (j = 0; j <= 9; j  += 1)
	{
	  d = i * j;  
	  if ((d / 10) != 0)
	    {
	      _putchar(d / 10 + '0');
	    }
	  else
	    _putchar(' ');
	  _putchar(d % 10 + '0');
	  if (j != 9)
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar(' ');
	    }
	}
      _putchar('\n');
    }
}
