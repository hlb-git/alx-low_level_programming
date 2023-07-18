#include "main.h"

/**
*print_alphabet - entry point
*
*Return: the program output
*/

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
