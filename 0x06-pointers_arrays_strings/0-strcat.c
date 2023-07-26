#include "main.h"

/**
* _strcat - contatinates two strings together
*
* Return: this returns the new string
*/


char *_strcat(char *dest, char *src)
{
	int p, c;

	for (p = 0; dest[p] != '\0'; p++)
	{}

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[p + c]	= src[c];
	}
	dest[c + p] = '\0';
	return (dest);

}
