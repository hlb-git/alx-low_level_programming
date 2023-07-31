#include "main.h"
/**
 * _memset - sets memory to array
 * @s: array to set
 * @b: value to set it as
 * @n: n amount of times
 * Return: char value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);


}
