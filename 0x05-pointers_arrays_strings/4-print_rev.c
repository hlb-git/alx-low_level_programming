#include "main.h"
#include "2-strlen.c"


/**
 * print_rev - converts n to 98
 * @s: the pointer argument
 */

void print_rev(char *s)
{
	int j = _strlen(s);
	int n;

	for (n = j - 1; j >= 0; n--)
	{
		if (n < 0)
		{
			break;
		}
		_putchar(s[n]);

	}
	_putchar('\n');
}
