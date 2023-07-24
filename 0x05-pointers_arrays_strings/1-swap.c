#include "main.h"

/**
 * swap_int - converts n to 98
 * @a: the pointer argument
 * @b: the pointer argument
 */


void swap_int(int *a, int *b)
{
	int c = *a;

	/**a = c;*/
	*a = *b;
	*b = c;
}
