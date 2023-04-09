#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list5-free_listint2.c.
 * @head: a double pointer to the head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		*head = hold;
		hold = (*head)->next;
		free(hold);
	}
}
