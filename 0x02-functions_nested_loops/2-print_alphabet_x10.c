#include "main.h"

/**
*print_alphabet - entry point
*
*Return: the program output
*/

void print_alphabet_x10(void);
{
	int j;
	for (j=0; j <= 10; j++)
	{

		char a;

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
