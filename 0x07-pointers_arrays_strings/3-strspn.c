#include "main.h"

/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */


unsigned int _strspn(char *s, char *accept)
{
	int i, t;
	unsigned int pos = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (t = 0; t < i; t++)
		{
			if (s[i] == accept[t])
			{
				pos++;
				break;
			}
		}
	}
	return (pos);
}
