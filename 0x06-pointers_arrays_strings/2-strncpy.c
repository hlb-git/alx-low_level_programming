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
	int c;

	for (c = 0; c <= n - 1 && src[c] != '\0'; c++)
	{
		dest[c]	= src[c];
	}

	dest[c] = '\0';
	return (dest);

}
