#include "main.h"
#include "2-strlen.c"


/**
 * puts_half- function name
 * @str: the pointer argument
 */


void puts_half(char *str)
{
	int j = _strlen(str) - 1;
	int n;

	if (j % 2 != 0)
	{
		j = j + 1;
	}
	for (n = j / 2; n <= j - 1; n++)
	{
		if (n > j - 1)
		{
			break;
		}
		_putchar(str[n]);

	}
	_putchar('\n');
}
