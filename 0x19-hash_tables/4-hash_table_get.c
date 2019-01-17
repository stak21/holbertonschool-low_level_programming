#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_get - Function: retrieves a value associated with a key
* @ht: The hash table
* @key: The key is the key to get the value
*
* Return: The value
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;

	if (!ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(key, tmp->key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
	}
	return (NULL);
}

