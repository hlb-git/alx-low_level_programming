#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - this is the entry point
*Return: this is always 0
*/

int main(void)
{
	int n;
	int remainder;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	remainder = n % 10;
	if (remainder > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, remainder);
	}
	else if (remainder == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, remainder);
	}
	else if (remainder < 6 && remainder != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, remainder);
	}
	return (0);
}
