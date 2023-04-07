#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - finds numbers of elements in a linked list
 * @h: pointer to head of linked list to find the size of
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h != NULL)
	{
		e++;
		h = h->next;
	}

	return(e);
}
