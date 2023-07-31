#include "main.h"
/**
 * _memcpy - sets memory to array
 * @dest: array to set
 * @src: value to set it as
 * @n: n amount of times
 * Return: char value
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
