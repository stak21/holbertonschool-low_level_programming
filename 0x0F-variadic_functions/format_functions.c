#include <stdio.h>
#include <stdarg.h>

/**
* int_format - prints out a integer
* @var: holds the variable to print
*/
void int_format(va_list var)
{
	printf("%i", va_arg(var, int));
}

/**
* char_format - prints out a char
* @var: holds the variable to print
*/

void char_format(va_list var)
{
	printf("%c", va_arg(var, int));
}

/**
* float_format - prints out a float
* @var: holds the variable to print
*/

void float_format(va_list var)
{
	printf("%f", va_arg(var, double));
}

/**
* char_ptr_format - prints out a string
* @var: holds the variable to print
*/

void char_ptr_format(va_list var)
{
	char *str;

	str = va_arg(var, char *);
	if (!str)
		str = "(nil)";
		printf("%s", str); 
}
