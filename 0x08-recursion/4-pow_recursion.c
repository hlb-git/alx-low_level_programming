#include "main.h"

/**
 * _pow_recursion - gives power of int
 * @x: integer to power
 * @y: power to do
 * Return: integer value
 */

int _pow_recursion(int x, int y)
{
	int p;
	int t;

	p = x;

	if (y == 1)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		t = x * p;
		_pow_recursion(x, y - 1);
		return (t);
	}
	return (0);
}
