#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - the function name
* @name: pointer to the array name
* @f: function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
