#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: string to copy
 * Return: char to newly duplicated string
 */

char *_strdup(char *str)
{
	int j = 0;
	char *k;
	int v = 0;

	if (str == NULL)
		return (NULL);

	while (str[v] != '\0')
	v++;

	k = malloc(sizeof(char) * v + 1);

	if (k == NULL)
		return (NULL);

	for (j = 0; j <= v; j++)
	{
		k[j] = str[j];
	}
	return (k);
}
