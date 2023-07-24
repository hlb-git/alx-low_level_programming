#include "main.h"
#include "2-strlen.c"


/**
 * puts_half- function name
 * @str: the pointer argument
 */


void puts_half(char *str)
{
	int j = _strlen(str);
	int n;
	int g = 0;

	if (j % 2 != 0)
	{
		g = g + 1;
	}
	for (n = (j + g) / 2; n <= j - 1; n++)
	{
		if (n > j - 1)
		{
			break;
		}
		_putchar(str[n]);

	}
	_putchar('\n');
}
