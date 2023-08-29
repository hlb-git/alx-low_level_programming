#include "lists.h"

/**
 * get_nodeint_at_index - gets node at a particular index
 * @head: linked list at head passed into the function
 * @index: index of node to grab
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *holder;

	holder = head;
	while (count != index && holder != NULL)
	{
		count++;
		holder = holder->next;
	}

	if (count != index)
		return (NULL);
	return (holder);
}
