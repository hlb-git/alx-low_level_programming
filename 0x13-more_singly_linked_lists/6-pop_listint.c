#include "lists.h"

/**
 * pop_listint - deletes a specific node
 * @head: linked list address
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t holder*;

	if (*head == NULL)
		return (data);
	holder = *head;
	data = holder->n;
	free(*head);
	*head = holder->next;

	return (data);
}
