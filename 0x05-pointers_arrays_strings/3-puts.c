#include "main.h"

/**
 * _puts - converts n to 98
 * @str: the pointer argument
 */


void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);

	}
	_putchar('\n');
}
