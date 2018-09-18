#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting form 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
  int i;
  int j;

  for (i = 0; i < 24; i += 1)
    {
      for (j = 0; j < 60; j += 1)
	{
	  _putchar(i / 10 + '0');
	  _putchar(i % 10 + '0');
	  _putchar(':');
	  _putchar(j / 10 + '0');
	  _putchar(j % 10 + '0');
	  _putchar('\n');
	}
    }
}
