#include "holberton.h"
#include <unistd.h>

/**
 * _abs - gets the absolute value of an integer
 *@int
 * Return: returns the absoulte number
 */

int _abs(int n)
{
  if (n < 0)
    {
      return -n;
    }
  else
    return n;
}
