#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initializes a dog
* @d: holds the pointer to the dog
* @name: holds the name of the dogs
* @age: holds the age of the dog
* @owner: holds the owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name)
		d->name = name;
	if (age)
		d->age = age;
	if (owner)
		d->owner = owner;
}
