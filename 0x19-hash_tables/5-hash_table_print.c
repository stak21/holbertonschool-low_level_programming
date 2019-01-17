#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_print - Function: Print out a hashtable
* @ht: The hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int flag = 0;
	hash_node_t **tmp;
	hash_node_t *cur = NULL;

	if (!ht)
		return;
	tmp = ht->array;
	printf("{");
	for (i = 0; i < ht->size; i += 1)
	{
		if (tmp[i])
		{
			if (flag == 0)
			{
				printf("'%s': '%s'", tmp[i]->key, tmp[i]->value);
				flag = 1;
			}
			else
				printf(", '%s': '%s'", tmp[i]->key, tmp[i]->value);
			cur = tmp[i]->next;
			while (cur)
			{
				printf(", '%s': '%s'", cur->key, cur->value);
				cur = cur->next;
			}

		}
	}
	printf("}\n");
}
