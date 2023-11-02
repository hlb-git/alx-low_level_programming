#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of the hash table to be created
 * Return: return a pointer to the newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t) * size);
	if (table == NULL)
		return (NULL);
	return (table);
}
