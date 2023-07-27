#include "main.h"

/**
* leet - contatinates two strings together
* @a: array to reverse
* Return: returns the encoded string.
*/



char *leet(char *a)
{
	char p[] = "a4A4e3E3o0O0t7T7l1L1";
	int c, d;

	for (c = 0; a[c] != '\0'; c++)
	{
		for (d = 0; p[d] != '\0'; d++)
		{
			if (a[c] == p[d] && p[c] != '\0' && p[d] != '\0')
			{
				a[c] = p[d + 1];
				break;
			}
		}
	}

	return (a);
}
