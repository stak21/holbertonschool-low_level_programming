#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* get_op_func - returns the corresponding functino pointer to the operator
* @s: holds the operator
* Return: the function pointer to the operator
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	    };
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i += 1;
	}
	printf("Error\n");
	exit(99);
}
