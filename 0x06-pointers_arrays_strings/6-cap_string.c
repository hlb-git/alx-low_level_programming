#include "main.h"

/**
* cap_string - contatinates two strings together
* @u: array to capitalize
* Return: string to return
*/

char *cap_string(char *u)
{
	int c;

	for (c = 0; u[c] != '\0'; c++)
	{
		if (u[c] == ' ' && u[c + 1] >= 'a' && u[c + 1] <= 'z')
		{
			u[c + 1] = u[c + 1] - 32;
		}
		else if ((u[c] == '\n' || u[c] == '\t') &&
		u[c + 1] >= 'a' && u[c + 1] <= 'z')
		{
			u[c + 1] = u[c + 1] - 32;
		}
		else if ((u[c] == '.' || u[c] == ',') &&
		u[c + 1] >= 'a' && u[c + 1] <= 'z')
		{
			u[c + 1] = u[c + 1] - 32;
		}

	}
	return (u);
}
