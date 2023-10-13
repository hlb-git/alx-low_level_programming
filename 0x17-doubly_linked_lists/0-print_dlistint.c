#include "main.h"

/**
 * print_dlistint - prints the data in a doubly linked list
 * @h: the list name passed as arguement
 * Return: returns the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
