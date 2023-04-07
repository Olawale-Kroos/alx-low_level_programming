#include <stdio.h>
#include "lists.h"

/**
 * print_list: prints all elements of a list_t list
 * *h: pointer to the start of the list_t
 *
 *
 * return: no of nodes in h
 */

size_t print_list(const list_t *h)
{
	int x;
	
	while (h != NULL)
	{
		if (h->str == NULL)
		{	
			printf("[%d] %s\n", 0, "(NULL)");
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
