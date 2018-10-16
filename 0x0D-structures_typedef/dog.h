#ifndef dog_header
#define dog_header

/**
* struct dog - a struct holding a dogs name, age and the owner of the dog
* @name: holds the name of the dog
* @age: holds the age of the dog
* @owner: holds the pointer to the owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*dog*/

