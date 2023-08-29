#include "lists.h"

/**
 * free_listint2 - frees the nodes and reset the head to NULL
 * @head: the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *holder;

	if (!*head)
		return;
	while (*head)
	{
		holder = *head;
		free(*head);
		*head = holder->next;
	}
	*head = NULL;
}
