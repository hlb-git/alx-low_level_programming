#include "main.h"

/**
*_isalpha - entry point
*@n: an argument
*Return: the program output
*/


int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	{
		_putchar('\n');
}
