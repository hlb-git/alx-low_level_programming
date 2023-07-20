#include "main.h"
/**
* more_numbers - prints 0 to 9
*/

void more_numbers(void)
{
	int y;
	int t;

	for (y = '1'; y <= '10'; y++)
	{
		for (t = '0'; t <= '14'; t++)
		{
			_putchar(t);
		}
		_putchar('\n');
	}
}
