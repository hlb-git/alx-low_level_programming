#include "main.h"
/**
* print_square - prints 0 to 9
* @size: the integer argument
*/


void print_square(int size)
{
	int s;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 1; s <= size; s++)
		{
			i = s;

			for (i = 1; i <= s; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
