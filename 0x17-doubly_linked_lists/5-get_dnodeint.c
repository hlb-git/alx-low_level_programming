#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at index
 * @head: head address of linked list
 * @index: index of list to find
 * Return: address of the found node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int dex = 0;

	temp = head;
	if (!head)
		return (NULL);
	while (!temp && dex != index)
	{
		dex++;
		temp = temp->next;
	}
	if (index == dex)
		return (temp);
	else
		return (NULL);
}
