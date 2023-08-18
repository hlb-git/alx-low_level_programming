#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>

/**
* print_all - function name
* @format: for specifier
*/


void print_all(const char * const format, ...)
{
	int j, k, len;
	char *string;
	va_list args;
	char *std_format = "cisf";

	len = strlen(format);
	va_start(args, format);
	if (format == NULL)
		return;
	j = 0;
	while (j < len)
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				(string == NULL) ? printf("(nil)") : printf("%s", string);
				break;
		}
		k = 0;
		while (k < 4)
		{
			if (format[j] == std_format[k] && j != len - 1)
				printf(", ");
			k++;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
