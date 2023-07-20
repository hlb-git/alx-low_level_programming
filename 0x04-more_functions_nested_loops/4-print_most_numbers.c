#include "main.h"
/**
* print_most_numbers - prints 0 to 9
*/

void print_most_numbers(void)
{
	int t;

	for (t = '0'; t <= '9'; t++)
	{
		if (t == '2' || t == '4')
		{
			continue;
		}
		else
		{
			_putchar(t);
		}
	}
	_putchar('\n');
}
