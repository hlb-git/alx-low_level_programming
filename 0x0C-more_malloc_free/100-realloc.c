#include "main.h"
#include <stdlib.h>

/**
*_realloc - the function
*@ptr: argument
*@old_size: second argument
*@new_size: new
*Return: reurn value
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *g;

	if (new_size == old_size)
		return (ptr);
	g = malloc(sizeof(unsigned int) * new_size);

	if (g == NULL)
		return (NULL);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	return (g);
}
