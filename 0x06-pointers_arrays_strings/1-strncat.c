#include "main.h"

/**
* _strcat - contatinates two strings together
*
* Return: this returns the new string
*/

char *_strncat(char *dest, char *src, int n)
{
	int p, c;

	for (p = 0; dest[p] != '\0'; p++)
	{}

	for (c = 0; (c <= n - 1 && src[c] != '\0'); c++)
	{
		dest[p + c] = src[c];
	}
	dest[c + p] = '\0';
	return (dest);

}
