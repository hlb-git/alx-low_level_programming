#include "main.h"
#include "6-abs.c"

/**
*print_last_digit - entry point
*@n: an argument
*Return: the program output
*/


int print_last_digit(int n)
{
	int last_digit;

	last_digit = _abs(n % 10);
	_putchar('0' + last_digit);
	return (last_digit);
}
