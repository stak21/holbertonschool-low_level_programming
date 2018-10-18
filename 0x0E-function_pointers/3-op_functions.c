#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* op_add - adds two integers
* @a: holds an integer
* @b: holds the other integer
* Return: the result
*/

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
* op_sub - subtracts two integers
* @a: holds an integer
* @b: holds the other integer
* Return: the result
*/

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
* op_mul - multiplies two integers
* @a: holds an integer
* @b: holds the other integer
* Return: the result
*/

int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
* op_div - divides two integers
* @a: holds an integer
* @b: holds the other integer
* Return: the result
*/

int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
* op_mod - modulo two integers
* @a: holds an integer
* @b: holds the other integer
* Return: the result
*/

int op_mod(int a, int b)
{
	return ((a) % (b));
}
