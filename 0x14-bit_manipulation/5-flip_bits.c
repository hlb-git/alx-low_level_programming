#include "main.h"

/**
 * flip_bits - the function name
 * @n: the binary to achieve
 * @m: the binary to compare
 * Return: returns how many bits that need to be fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, count = 0, mask = 1;

	diff = n ^ m;
	while (diff > 0)
	{
		count += diff & mask;
		diff >>= 1;
	}
	count = (unsigned int)count;

	return (count);
}
