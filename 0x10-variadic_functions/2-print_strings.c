#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - function name
* @separator: as the name implies
* @n: number of strings
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int itr;
	char *value;
	va_list args;

	va_start(args, n);

	for (itr = 0; itr < n; itr++)
	{
		if (itr > 0 && separator != NULL)
			printf("%s", separator);
		value = va_arg(args, char *);

		if (value == NULL)
			printf("(nil)");
		else
			printf("%s", value);
	}
	va_end(args);
	printf("\n");
}
