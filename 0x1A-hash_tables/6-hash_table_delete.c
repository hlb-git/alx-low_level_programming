#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t *temp;

	if (!ht)
		return;

	size = ht->size;

	for (i = 0; i < size; i++)
	{
		while (ht->array[size])
		{
			temp = ht->array[size]->next;
			free(ht->array[size]->key);
			free(ht->array[size]->value);
			free(ht->array[size]);
			ht->array[size] = temp;
		}

		free(ht->array[size]);
	}
	free(ht->array);
	free(ht);
}
