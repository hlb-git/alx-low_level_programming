#include "main.h"

/**
*jack_bauer - entry point
*
*Return: the program output
*/


void jack_bauer(void)
{

	int i, k;

	for (i = 0; i <= 23; i++)
	{
		for (k = i; k <= 60; k++)
		{
			_putchar(k);
			_putchar('\n');
		}
		_putchar(i);
	}

}
