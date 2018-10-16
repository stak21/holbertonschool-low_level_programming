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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*dog*/

