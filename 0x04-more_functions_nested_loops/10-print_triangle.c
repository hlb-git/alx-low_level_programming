#include "main.h"
/**
* print_triangle - prints 0 to 9
* @size: the integer argument
*/


void print_triangle(int size)
{
	int s;
	int i;
	int u;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = size; s >= 1; s--)
		{

			for (i = s - 1; i >= 1; i--)
			{
				_putchar(' ');
			}
			for (u = s; u <= size; u++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
