#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements(nodes) in a linked listint_t list.
 * @*h: pointer to the first element(node) of linked list
 *
 * Return: number of elements(nodes) in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
