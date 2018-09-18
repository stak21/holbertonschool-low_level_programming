#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98: prints to 98 from any number
 *
 */

void print_to_98(int n)
{
  int result;
  int i;

  result = n - 98;
    if (result < 0)
      {
	result = -result;
	for (i = n; i <= 98; i += 1)
	  {
	    printf("%d", i);
	    if (i != 98)
	      {
		printf(", ");
	      }
	  }
      }
    else if (result > 0)
      {
	for (i = n; i >= 98; i -= 1)
	  {
	    printf("%d", i);
	    if (i != 98)
	      {
                printf(", ");
	      }
	  }
      }
    else
      {
	printf("98");
      }
    printf("\n");
}
