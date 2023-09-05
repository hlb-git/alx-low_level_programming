#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert to binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;

	if (n == 0)
		_putchar('0');

	while (n)
	{
		i = n & 1;

		if (i == 1)
			_putchar('1');
		else
			_putchar('0');
		n = n >> 1;
	}
}
