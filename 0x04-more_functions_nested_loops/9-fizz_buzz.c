#include <stdio.h>

/**
* main - entry point
*/


int main(void)
{
	int l;

	for (l = 1; l <= 100; l++)
	{
		if (l % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (l % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", l);
		}
	}
	printf("\n");
	return (0);
}
