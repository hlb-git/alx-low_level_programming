#include "main.h"
#include "2-strlen.c"


/**
 * puts2 - function name
 * @str: the pointer argument
 */



void puts2(char *str)
{
	int j = _strlen(str);
	int n;

	for (n = 0; n <= j - 1; n += 2)
	{
		if (n > j - 1)
		{
			break;
		}
		_putchar(str[n]);

	}
	_putchar('\n');
}
