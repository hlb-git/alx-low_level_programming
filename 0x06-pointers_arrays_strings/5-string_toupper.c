#include "main.h"

/**
* string_touper - contatinates two strings together
* @u: array to capitalize
*/


char *string_toupper(char *u)
{
	int c;

	for (c = 0; u[c] != '\0'; c++)
	{
		if (u[c] >= 'a' && u[c] <= 'z')
		{
			u[c] = u[c] - 32;
		}
		else
		{}
	}
	return (u);
}
