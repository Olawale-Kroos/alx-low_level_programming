#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements(node) of a listint_t list.
 * @*h: pointer to the first element(node) of list_t to print
 * 
 * Return: number of element(nodes) in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elem++;
	}
	return (elem);
}
