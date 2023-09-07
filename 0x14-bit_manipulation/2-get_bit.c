#include "main.h"

/**
 * get_bit - gets a bit at a perticular position
 * @n: the binary we wanna check
 * @index: the index position we wanna check
 * Return: returns the bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index) /*shifts the mask by the value of index if not 0*/
		mask = mask << index;

	if (n & mask) /* this logic checks if the result is 1 or 0*/
		return (1);
	else if (!(n & mask))
		return (0);
	else
		return (-1);
}
