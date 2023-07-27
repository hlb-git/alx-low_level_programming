#include "main.h"

/**
* _strncat - contatinates two strings together
* @dest: first string arguement
* @src: second string argument
* @n: the number of strings to be copied
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
