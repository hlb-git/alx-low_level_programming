#include "main.h"

/**
 * binary_to_uint - this function converts binary to decimal
 * @b: pointer to a string of binary
 * Return: returns an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, dec = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] == '1')
			dec = (dec << 1) | 1;
		else if (b[i] == '0')
			dec = dec << 1;
		else
			return (0);
		i++;
	}
	return (dec);
}
