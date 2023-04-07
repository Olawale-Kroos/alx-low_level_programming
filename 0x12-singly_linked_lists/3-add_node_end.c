#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list.
 * @head: A pointer the head of the list.
 * @str: The string to be added to the list.
 *
 * Return: NULL - if function fails
 *         or, address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *lid;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	lid = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = lid;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
