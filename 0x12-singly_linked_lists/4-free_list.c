#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 * return: void
 */

void free_list(list_t *head)
{
	list_t *v;

	while (head)
	{
		v = head->next;
		free(head->str);
		free(head);
		head = v;
	}
}
