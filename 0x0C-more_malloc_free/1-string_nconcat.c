#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - function name
*@s1: first arguement
*@s2: second argument
*@n: number of s2 to copy
*Return: returns char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *g;
	unsigned int t, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (t = 0; s1[t] != '\0'; t++)
	{}

	for (b = 0; s2[b] != '\0'; b++)
	{}

	g = malloc(sizeof(char) * (t + b));

	if (g == NULL)
		return (NULL);

	for (b = 0; b < t; b++)
	{
		g[b] = s1[b];
	}

	for (b = 0; b < n && s2[b] != '\0'; b++)
	{
		g[t + b] = s2[b];
	}
	g[t + b] = '\0';

	return (g);
}
