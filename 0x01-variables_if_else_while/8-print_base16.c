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
	}
	for (a = 'a'; a <= 'f'; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
