#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - converts n to 98
 * @s: the pointer argument
 */

void rev_string(char *s)
{
	int p;
	char k;
	int j;

	j = _strlen(s) - 1;


	for (p = 0; p <= j / 2; p++)
	{
		k = s[p];
		s[p] = s[j - p];
		s[j - p] = k;
	}
}
