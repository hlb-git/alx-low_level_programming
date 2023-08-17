#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - function name
* @separator: one of the arguements
* @n: that is the total number of variable arguments
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			return;
		printf("%d", va_arg(args, int));
		if (i != n - 1)
			printf("%s ", separator);
	}
	va_end(args);
	printf("\n");
}
