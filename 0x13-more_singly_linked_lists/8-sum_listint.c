#include "lists.h"

/**
 * sum_listint - sums the data in a list
 * @head: head of linked list
 * Return: value of the sum
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
