#include "main.h"

/**
 * clear_bit - changes the value of a bit at position to 0
 * @n: the binary we wanna effect the change on
 * @index: the index the change will happen
 * Return: returns 1 on success and -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);
	mask = mask << index;

	*n = *n | mask;
	*n = *n & (~mask);

	if (*n ^ mask)
		return (1);
	else
		return (0);
}
