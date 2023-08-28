#include "lists.h"

/**
 * print_listint - prints the integer variables in the list
 * @h: the list passed into the function
 * Return: returns the number of nodes it printed from
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
