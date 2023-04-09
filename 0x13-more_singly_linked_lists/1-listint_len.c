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
	size_t nodes;

	for (nodes = 0; h; h = h->next, nodes++);

	return (nodes);
}
