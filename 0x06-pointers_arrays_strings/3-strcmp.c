#include "main.h"

/**
* _strcmp - contatinates two strings together
* @s1: first string arguement
* @s2: second stirng arguement
* Return: this returns the new string
*/


int _strcmp(char *s1, char *s2)
{
	int p;


	p = 0;
	while (s1[p] - s2[p] == 0 && s1[p] != '\0' && s2[p] != '\0')
	{
		p++;
	}
	return (s1[p] - s2[p]);
}
