#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - this function adds node to the beginning of a list
 * @head: pointer to the head address
 * @str: literal string to be added to the node
 * Return: returns a pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int x = 0;
	list_t *new;

	while (str[x])
		x++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = x;
	new->next = *head;

	*head = new;
	return (new);
}
