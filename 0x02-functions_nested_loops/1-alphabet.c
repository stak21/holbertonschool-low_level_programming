#include "holberton.h"
#include <unistd.h>

/**
 * _alphabet - prints alphabet in lowercase with a newline
 *
 */

void print_alphabet(void)
{
  int i;
  int _putchar(char c);

  for (i = 'a'; i <= 'z'; i += 1)
    {
      _putchar(i);
    }
  _putchar('\n');
}
