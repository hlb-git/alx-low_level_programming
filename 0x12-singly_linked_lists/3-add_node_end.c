#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node to the end of a list
 * @head: pointer to the head list
 * @str: string to add to the list
 * Return: returns a pointer to the new list
 */

list_t *add_node_end(list_t **head, const char *str)
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
