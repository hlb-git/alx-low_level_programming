#include "hash_tables.h"

/**
 * hash_table_print - prints every value in the table
 * @ht: the hash table to print from
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i = 0, last_idx = 0;

	if (ht)
	{
		size = ht->size;
		last_idx = size;

		while (last_idx > 0)
		{
			if (ht->array[last_idx])
				break;
			last_idx -= 1;
		}

		printf("{");
		while (size)
		{
			if (ht->array[i])
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				if (i != last_idx)
					printf(", ");
			}
			i++;
			size--;
		}
		printf("}\n");
	}
}
