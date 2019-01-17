#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_set - Function: adds an elements to the hash table
* @ht: the hash table you want to add or update to
* @key: the key
* @value: the value to store
*
* Return: 1 (Success)
* otherwise 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *copy_value = NULL;
	char *copy_key = NULL;
	hash_node_t *node = NULL;
	hash_node_t *tmp = NULL;

	if (!ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	copy_value = strdup(value);
	if (!copy_value)
		return (0);
	copy_key = strdup(key);
	if (!copy_key)
	{
		free(copy_value);
		return (0);
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(copy_value);
		free(copy_key);
		return (0);
	}

	node->key = copy_key;
	node->value = copy_value;
	node->next = NULL;

	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = copy_value;
				free(node->key);
				free(node);
				return (1);
			}
			tmp = tmp->next;
		}
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	else
		ht->array[index] = node;

	return (1);
}
