#include "lists.h"

/**
 * add_nodeint - adds node to the beggining of a list
 * @head: the passed list pointer
 * @n: the integer to be added to the node
 * Return: returns a pointer to the list head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *holder = malloc(sizeof(listint_t));

	if (!holder)
		return (NULL);

	holder->n = n;
	holder->next = *head;

	*head = holder;

	return (holder);
}
