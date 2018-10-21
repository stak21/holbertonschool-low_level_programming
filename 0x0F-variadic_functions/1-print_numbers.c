#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*  print_numbers - only prints numbers
* @separator: the string to be printed between numbers
* @n: holds the number of arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n && (separator); i += 1)
	{
		if (sizeof(va_arg(arg, int)) == sizeof(int))
			printf("%i", va_arg(arg, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
