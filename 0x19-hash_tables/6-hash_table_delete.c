#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_delete - Function deletes a hash table
* @ht: The hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *cur, *tmp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i += 1)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			cur = tmp;
			tmp = tmp->next;
			free(cur->key);
			free(cur->value);
			free(cur);
		}
	}

	free(ht->array);
	free(ht);
}
