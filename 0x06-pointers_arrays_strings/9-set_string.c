#include <stdio.h>
#include "holberton.h"

/**
* set_string - sets the value of a pointer to a char
* @s: holds the pointer
* @to: holds the char to
*/

void set_string(char **s, char *to)
{
	*s = to;
}
