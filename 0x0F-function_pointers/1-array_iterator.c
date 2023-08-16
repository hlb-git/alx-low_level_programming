#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - function name
* @array: pointer to an array
* @size: size of the array
* @action: passed function argurment
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (count = 0; count < size; count++)
		{
			action(array[count]);
		}
	}
}
