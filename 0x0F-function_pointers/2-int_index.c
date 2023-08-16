#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
*int_index - function name
*@array: pointer to an array arguement
*@size: size of the passed array
*@cmp: the comparison function
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	int count;
	int check;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (count = 0; count < size; count++)
	{
		check = cmp(array[count]);
		if (check != 0)
		{
			return (count);
		}
	}

	return (-1);
}
