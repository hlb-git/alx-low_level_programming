#include "main.h"

/**
*jack_bauer - entry point
*
*Return: the program output
*/


void jack_bauer(void)
{

	char i, k;

	for (i = 0 ; i <= 23; i++)
	{
		for (k = i; k <= 59; k++)
		{
			_putchar(k);
			_putchar('\n');
		}
		_putchar(i);
	}

}
