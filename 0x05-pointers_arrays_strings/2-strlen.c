#include "main.h"

/**
 * _strlen - converts n to 98
 * @s: the pointer argument
 * Return: returns the value of the string length
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{}
	return (n);
}
