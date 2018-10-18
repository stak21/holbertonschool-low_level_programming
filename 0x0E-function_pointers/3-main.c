#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h" 
#include "3-calc.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(int ac, char **av)
{
	int num1, num2;
	char op;
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = av[2][0];
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	if ((num2 == 0 && op == '/') || (num2 == 0 && op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
/*	if (op != '/' && op != '%' && op != '-' && op != '+' && op != '*')
		return (NULL);
		*/
	printf("%i\n", get_op_func(av[2])(num1, num2));

	return (0);
}
