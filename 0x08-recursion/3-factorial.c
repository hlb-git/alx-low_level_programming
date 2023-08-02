#include "main.h"

/**
 * factorial - gives factorial of number
 * @n: number to use
 * Return: returns factor or -1
 */


int factorial(int n)
{
	int f;

	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	return (-1);
	else
	{
		f = n * factorial(n - 1);
		return (f);
	}
	return (f);
}
