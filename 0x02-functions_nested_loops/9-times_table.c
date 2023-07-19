#include "main.h"

/**
*times_table - entry point
*Return: the program output
*/

void times_table(void)
{

	int l, a;

	for (l = 0; l < 10; l++)
	{
		_putchar('0');
		_putchar(l);

		a = l;

		for (a = l; a < 10; a += a)
		{
			_putchar(a);

		}
		_putchar('\n');
	}
}
