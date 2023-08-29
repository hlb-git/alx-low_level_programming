#include "lists.h"

/**
 * listint_len - function that counts number of nodes in the list
 * @h: passed list to perform the operation on
 * Return: returns the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
