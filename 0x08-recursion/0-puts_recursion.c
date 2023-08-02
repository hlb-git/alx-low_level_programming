#include "main.h"

/**
 * _puts_recursion - uses recursion
 * @s: string to recurse through
 */

void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] != '\0')
	{
		_putchar(s[n]);
	}
	else
	{
		_putchar('\n');
		return;
	}
	n++;
	_puts_recursion(s + n);
}
