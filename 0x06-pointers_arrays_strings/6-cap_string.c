#include "main.h"

/**
* cap_string - capitalizes srings
* @u: array to capitalize
* Return: returns capitalized string
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
		else if ((u[c] == '\n' || u[c] == '\t' || u[c] == '{' ||
		u[c] == ')') && u[c + 1] >= 'a' && u[c + 1] <= 'z')
		{
			u[c + 1] = u[c + 1] - 32;
		}
		else if ((u[c] == '.' || u[c] == ';' || u[c] == '(' ||
		u[c] == '?' || u[c] == '!' || u[c] == '"' || u[c] == ',' ||
		u[c] == '}') &&	u[c + 1] >= 'a' && u[c + 1] <= 'z')
		{
			u[c + 1] = u[c + 1] - 32;
		}

	}
	return (u);
}
