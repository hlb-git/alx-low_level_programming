#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value stored in a hash table
 * @ht: the hash table to use
 * @key: the key to each value
 * Return: returns the value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key || !ht->size)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);

		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
