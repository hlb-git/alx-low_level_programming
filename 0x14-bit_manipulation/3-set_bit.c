#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: the bit to set
 * @index: the index we want to change
 * Return: returns 1 on success or -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index)
		mask = mask << index;

	*n = *n | mask;
	if (*n | mask)
		return (1);
	else
		return (-1);
}
