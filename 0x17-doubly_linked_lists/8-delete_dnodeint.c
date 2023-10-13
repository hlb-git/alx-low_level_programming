#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node in list at index
 * @head: head of address
 * @index: index to delete
 * Return: success or fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int dex = 0;

	if (!(*head))
		return (-1);
	if (!index)
	{
		if ((*head)->next)
		{
			free(*head);
			*head = (*head)->next;
			(*head)->prev = NULL;
			return (1);
		}
		free(*head);
		(*head) = NULL;
		return (1);
	}
	tmp = *head;
	while (tmp->next && dex != index)
	{
		dex++;
		tmp = tmp->next;
	}
	if (dex == index)
	{
		if (tmp->next)
		{
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			free(tmp);
		}
		else
		{
			tmp->prev->next = NULL;
			free(tmp);
		}
		return (1);
	}
	return (-1);
}
