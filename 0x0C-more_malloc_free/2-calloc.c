#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function
 * @nmemb: first argument
 * @size: size of bytes
 * Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *g;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (g == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		g[i] = 0;

	return (g);
}
