#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new element(node) at the beginning of a listint_t list.
 * @**head: a double pointer to the beginning of a listint_t list
 * @n: integer to add in the new elememt(node)
 *
 * Return: If the function error occur == NULL
 * 		else == address of new element(node)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
