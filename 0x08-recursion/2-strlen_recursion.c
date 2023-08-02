#include "main.h"

/**
 * _strlen_recursion - uses recursion
 * @s: string to recurse through
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		l++;
	}
	return (l);
}
