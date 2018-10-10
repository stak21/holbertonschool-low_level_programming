#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* argstostr - concatenates all the args in my program
* @ac: holds the number of arguments passed in
* @av: holds the strings to the arguments passed in
* Return: returns the pointer to the new string or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	char *ret_ptr;
	int i;
	int j;
	int k;
	int len;

	if (ac == 0 || av == NULL)
		return (NULL);
	j = 0;
	k = 0;
	for (i = 0; i < ac; i += 1)
	{
		while (av[i][j] != '\0')
		{
			j += 1;
		}
		len += j;
		j = 0;
	}
	ret_ptr = malloc(sizeof(char) * len + 1 + len);

		for (i = 0; i < ac; i += 1)
		{
			while (av[i][j] != '\0')
			{
				ret_ptr[j + k] = av[i][j];
				j += 1;
			}
			k += j;
			j = 0;
			ret_ptr[k++] = '\n';
		}
	ret_ptr[k + 1] = '\0';

	return (ret_ptr);
}
