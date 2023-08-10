#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
*main - main function
*@argc: integer
*@argv: array
*Return: return value for the program
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 && num2 == 0)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (98);
	}
	return (0);
}
