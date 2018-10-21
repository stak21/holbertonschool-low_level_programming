#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_all - prints anything
* @format: format is a list of types of arguments
*/

void print_all(const char * const format, ...)
{
	va_list arg;
	char * f[4][2] = {
		{"c", char}, {"i", int},
		{"f", float}, {"s", char *},
	};
	int i, j;

	va_start(arg, format);
	i = j = 0;

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*f[j][0] == format[i])
				printf("%lu", sizeof(*f[j][1]);
			j += 1;
		}
	i += 1;
	}
va_end(arg);
printf("\n");
}
