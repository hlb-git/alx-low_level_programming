#include <stdio.h>

/**
*main - entry point
*
*Return: the code terminates here
*/

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
