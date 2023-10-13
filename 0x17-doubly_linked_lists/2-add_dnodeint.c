#include "lists.h"

/**
 * add_dnodeint - adds node at the begining
 * @head: address of head of the doubly linked lst
 * @n: number
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	else
	{
		(*head)->prev = new;
		new->next = *head;
		*head = new;
		return (new);
	}
}
