#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
* key_index - retrieves the index of a key
* @key: the key to look for the index of
* @size: the size of the array of the hash table
*
* Return: the index at which the key/value pair should be stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);

	return (index % size);
}
