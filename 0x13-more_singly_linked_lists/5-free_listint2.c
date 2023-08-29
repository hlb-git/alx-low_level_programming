#include "lists.h"

/**
 * free_listint2 - frees the nodes and reset the head to NULL
 * @head: the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *holder;

	while (head)
	{
		holder = *head->next;
		free(head);
		*head = holder;
	}
	*head = NULL;
}
