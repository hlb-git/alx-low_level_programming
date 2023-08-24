#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees the heap allocated space
 * @head: the address of the passed list
 */

void free_list(list_t *head)
{
	list_t *holder;

	while (head)
	{
		holder = head->next;
		free(head->str);
		free(head);

		head = holder;
	}

}
