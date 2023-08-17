#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - function name
* @n: number of passed variable argument
* Return: return value of the operation
*/


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int j, sum = 0;


	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		sum += j;
	}
	va_end(args);
	return (sum);
}
