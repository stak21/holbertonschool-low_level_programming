#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - a function that xreates a new dog
* @name: the name of the dog
* @age: holds the age integer
* @owner: holds the owner
* Return: the pointer to the dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret_dog;
	int i, j, l, k;

	i = j = 0;
	ret_dog = malloc(sizeof(dog_t));
	if (ret_dog == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		while (name[i] != '\0')
			i += 1;
	}
	if (owner != NULL)
	{
		while (owner[j] != '\0')
			j += 1;
	}
	ret_dog->name = malloc(i * sizeof(char) + 1);
	ret_dog->owner = malloc(j * sizeof(char) + 1);
	for (k = 0; k < i; k += 1)
		ret_dog->name[k] = name[k];
	for (l = 0; l < j; l += 1)
		ret_dog->owner[j] = owner[l];
	if (age >= 0)
		ret_dog->age = age;
	return (ret_dog);
}
