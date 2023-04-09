#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @*head: double pointer to the head of the list
 *
 * Return: the head element(node's) data (int v), Else 0 if list is empty
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int v;

	if (*head == NULL)
	{	
		new = *head;
		v = (**head).n;
		*head = (*head)->next;

		free(new);
	}
	return (v);
}
