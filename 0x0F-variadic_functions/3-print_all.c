#include<stdio.h>
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
	int i, j;

	va_start(arg, format);
	i = j = 0;

	
va_end(arg);
printf("\n");
}