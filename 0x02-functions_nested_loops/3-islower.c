#include "main.h"

/**
*_islower - entry point
*@c: an argument
*Return: the program output
*/


int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
