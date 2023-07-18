#include "main.h"

/**
*_abs - entry point
*@n: an argument
*Return: the program output
*/


int _abs(int n)

{
	if (n < 0)
	{
		n = n + (n*2);
		return (n);
	}
	else
	{
		n = n;
		return (n);
	}
	_putchar('\n');
}
