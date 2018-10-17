#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - prints a name
* @name: holds the pointer to a name string
* @f: a pointer to a function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
