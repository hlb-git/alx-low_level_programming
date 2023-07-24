#include "main.h"
#include <stdio.h>
/**
 * print_array - converts n to 98
 * @a: the pointer argument
 * @n: the pointer argument
 */


void print_array(int *a, int n)
{
	int p;

	for (p = 0; p <= n - 1; p++)
	{
		if (p == n - 1)
		{
			printf("%d", a[p]);
		}
		else
		{
			printf("%d, ", a[p]);
		}
	}
	printf("\n");
}
