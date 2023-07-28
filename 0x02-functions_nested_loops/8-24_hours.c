#include "main.h"

/**
*jack_bauer - entry point
*
*/

void jack_bauer(void)
{
	int i, k;
	int u1, d1;
	int u2, d2;

	for (i = 0 ; i < 24; i++)
	{
		u1 = i / 10;
		d1 = i % 10;
		for (k = 0; k < 60; k++)
		{
			u2 = k / 10;
			d2 = k % 10;

			_putchar('0' + u1);
			_putchar('0' + d1);
			_putchar(':');
			_putchar('0' + u2);
			_putchar('0' + d2);
			_putchar('\n');
		}
	}
}
