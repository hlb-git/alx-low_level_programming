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
		if (a == '9')
		continue;
		else
		{
			putchar(',');
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
