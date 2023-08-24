#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts the number of nodes in the linked list
 * @h: the passed arguement to count
 * Return: returns the number of nodes
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
