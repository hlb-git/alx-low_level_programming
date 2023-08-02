#include "main.h"

/**
* wildcmp - main
* @s1: string 1
* @s2: string 2
* Return: the output
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	wildcmp( s1 + 1,s2 + 1);

	return (0);
}
