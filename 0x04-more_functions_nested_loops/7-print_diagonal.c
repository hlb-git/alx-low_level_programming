#include "main.h"
/**
* print_diagonal - prints 0 to 9
* @n: the integer argument
*/

void print_diagonal(int n)
{
	int s;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 1; s <= n; s++)
		{
			i = s;

			for (i = 1; i < s; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
