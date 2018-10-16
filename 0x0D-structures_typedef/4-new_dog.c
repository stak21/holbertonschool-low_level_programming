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

	ret_dog = malloc(sizeof(dog_t));
	if (ret_dog == NULL)
		return (NULL);
	if (name != NULL)
		ret_dog->name = name;
	if (age >= 0)
		ret_dog->age = age;
	if (owner != NULL)
		ret_dog->owner = owner;
	return (ret_dog);
}
