#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_strings - prints a string
* @separator: holds a string
* @n: holds the number of arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arg;
	char *word;

	va_start(arg, n);
	for (i = 0; i < n; i += 1)
	{
		word = va_arg(arg, char *);
		if (word == NULL)
			printf("(nil)");
		else if (sizeof(word) == sizeof(void *))
			printf("%s", word);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
