#include "main.h"
#include "2-strlen.c"


/**
 * _strcpy - function name
 * @dest: the pointer argument
 * @src: the pointer argument
 * Return: returns the char string array
 */


char *_strcpy(char *dest, char *src)
{
	int j = _strlen(src);
	int n;

	for (n = 0; n <= j; n++)
	{
		dest[n] = src[n];
	}
	return (dest);
}
