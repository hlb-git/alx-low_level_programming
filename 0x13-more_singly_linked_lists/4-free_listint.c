#include "lists.h"

/**
 * free_listint - frees the nodes in the list
 * @head: the head of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head)
	{
		holder = head->next;

		free(head);
		head = holder;
	}
}
