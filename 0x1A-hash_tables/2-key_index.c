#include "hash_tables.h"

/**
 * key_index - gets the index to store the key and value
 * @key: used to generate the hash value
 * @size: size of the array
 * Return: returns the index value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
