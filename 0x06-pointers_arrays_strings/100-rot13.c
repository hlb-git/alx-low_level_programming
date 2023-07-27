#include "main.h"

/**
* rot13 - contatinates two strings together
* @a: array to reverse
* Return: returns the encoded string.
*/

char *rot13(char *a)
{
	char p[] = "abcdefghijklm";
	char o[] = "nopqrstuvwxyz";
	int c, d;

	for (c = 0; a[c] != '\0'; c++)
	{
		for (d = 0; p[d] != '\0'; d++)
		{
			if (a[c] == p[d])
			{
				a[c] = o[d];
				break;
			}
		}
	}

	return (a);
}
