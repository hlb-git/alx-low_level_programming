#include <stdio.h>

/**
*main - entry point
*
*Return: the code terminates here
*/

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);
	putchar(',');
	if (a == 9)
	continue;
	else
	{
	putchar(' ');
	}
	}
	return (0);
}
