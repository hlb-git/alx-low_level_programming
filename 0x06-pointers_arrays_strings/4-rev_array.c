#include "main.h"

/**
* reverse_array - contatinates two strings together
* @a: array to reverse
* @n: number of characters in array
*/

void reverse_array(int *a, int n)
{
	char p;
	int c;

	if (n <= 0)
	{}
	else
	{
		for (c = 0; c <= (n - 1) / 2; c++)
		{
			p = a[c];
			a[c] = a[n - 1 - c];
			a[n - 1 - c] = p;
		}
	}
}
