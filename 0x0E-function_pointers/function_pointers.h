#ifndef header
#define header
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int it_index(int *array, int size, int (*cmp)(int));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
#endif
