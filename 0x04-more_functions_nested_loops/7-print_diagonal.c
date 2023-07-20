#include "main.h"
/**
* print_diagonal - prints 0 to 9
* @n: the integer argument
*/

void print_diagonal(int n)
{
	int s;
	int i;

	for (s = 0; s <= n; s++)
	{
		i = s;

		for (i = 0; i <= s; i++)
		{
			_putchar(' ');
		}
		_putchar(92);

	}
}
