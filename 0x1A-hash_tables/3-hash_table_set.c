#include "hash_tables.h"

/**
 * hash_table_set - set a value to a hash table
 * @ht: hash table to add value to
 * @key: key of the array
 * @value: value to add to the table
 * Return: returns 1 on success or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;


	if (!ht || !key || !ht->size)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}

	new->value = strdup(value);
	if (!new->value)
	{
		free(new);
		return (0);
	}

	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
