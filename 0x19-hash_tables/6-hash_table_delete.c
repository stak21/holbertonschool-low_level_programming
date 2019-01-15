#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_delete - Function deletes a hash table
* @ht: The hash table
*/

void hash_table_delete(hash_table_t *ht)
{

	free(ht);
	
}
