#include "main.h"

/**
 * _strpbrk - finds string
 * @s: string to find stuff
 * @accept: accepting arrays
 *
 * Return: returns new value
 */


char *_strpbrk(char *s, char *accept)
{
	int t;
	int j;

	for (t = 0; s[t] != '\0'; t++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[t] == accept[j])
			{
				return (s + t);
			}
		}
	}
	if (accept[t] == '\0')
	{
		return(s + t);
	}
	return (s + t);
}
