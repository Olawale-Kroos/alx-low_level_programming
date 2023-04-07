#include "lists.h"
#include <stdio.h>

/**
 * print_list: Prints all the elements of a list_t list
 *  *h: the list_t list(pointer to the start of the list_t)
 *
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			x++;
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			x++;
			h = h->next;
		}
	}

	return(x);
}
