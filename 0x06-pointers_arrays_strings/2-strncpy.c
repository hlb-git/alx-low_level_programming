#include "main.h"

/**
* _strncpy - copies string to another
* @dest: destination array
* @src: string to be copied
* @n: number of string to be copied
* Return: this returns the new string
*/


char *_strncpy(char *dest, char *src, int n)
{
	int c, g;

	for (g = 0; dest[g] != '\0'; g++)
	{}

	for (c = 0; c <= n - 1 && src[c] != '\0'; c++)
	{
		dest[c]	= src[c];
	}

	dest[g] = '\0';
	return (dest);

}
