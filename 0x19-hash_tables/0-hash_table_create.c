#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: Create a hash table with size
*
* Return: A pointer to the new hashtable
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **node;
	unsigned int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	node = malloc(sizeof(hash_node_t *) * size);
	if (!node)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i += 1)
		node[i] = NULL;
	table->size = size;
	table->array = node;

	return (table);
}
