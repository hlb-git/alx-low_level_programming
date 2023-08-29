#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of a list
 * @head: the head of the list
 * @n: one of the data to add to the node
 * Return: returns a pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *trav;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
	}
	else
	{
		trav = *head;

		while (trav->next)
		{
			trav = trav->next;
		}
		trav->next = new;
	}
	return (new);
}
