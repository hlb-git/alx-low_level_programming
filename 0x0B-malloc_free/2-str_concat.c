#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concats strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns concated string
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0;
	int z;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
	x++;
	while (s2[y] != '\0')
	y++;

	p = malloc(sizeof(char) * (x + y + 1));
	if (p == NULL)
		return (NULL);
	for (z = 0; z < x ; z++)
	{
		p[z] = s1[z];
	}

	for (z = 0; z <= y; z++)
	{
		p[x + z] = s2[z];
	}
	return (p);
}
