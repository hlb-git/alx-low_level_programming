#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of the hash table to be created
 * Return: return a pointer to the newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int j;

	if (size > 0)
	{
		table = malloc(sizeof(hash_table_t));
		if (table == NULL)
			return (NULL);

		table->size = size;
		table->array = malloc(sizeof(hash_table_t) * size);
		if (!table->array)
		{
			free(table);
			return (NULL);
		}
		for (j = 0; j < size; j++)
			table->array[j] = NULL;
		return (table);
	}
	return (NULL);
}
