#include "main.h"
#include <stdlib.h>
/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */
int *array_range(int min, int max)
{
	int *t;
	int i;
	int l;

	if (min > max)
		return (NULL);
	l = 0;
	for (i = min; i <= max; i++)
		l++;

	t = malloc(sizeof(int) * l);
	if (t == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
