#include "main.h"
/**
* print_line - prints 0 to 9
* @n: the integer argument
*/


void print_line(int n)
{
	int s;

	for (s = 1; s <= n; s++)
	{
		if (s <= 0)
		{
			continue;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}
