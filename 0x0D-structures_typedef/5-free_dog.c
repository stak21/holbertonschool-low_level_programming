#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees memory of a struct type
* @d: holds the pointer to the dog
*/

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
