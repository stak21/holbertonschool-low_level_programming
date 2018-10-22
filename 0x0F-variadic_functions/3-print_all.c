#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_all - a function that returns a function pointer
* @format: format is a list of types of arguments
*/

void print_all(const char * const format, ...)
{
	va_list args;
	format_t f[] = {
		{"c", char_format}, {"i", int_format},
		{"f", float_format}, {"s", char_ptr_format},
		{NULL, NULL}
	};
	char *separator;
	int i, j;

	va_start(args, format);
	i = 0;

	separator = "";
	

	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			
				if (f[j].f[0] == format[i])
				{
					printf("%s", separator);
					(f[j].func)(args);
					separator = ", ";
				}
			j += 1;
		}
	i += 1;
	}
	va_end(args);
	printf("\n");
}


