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
	char *str1;
	for (x = 0; h; x++, h = h->next)
	{
		str1 = h->str;
		if (str1)
			printf("[%d] %s\n", h->len, str1);
		else
			printf("[0] %p\n", str1);
	}
	return(x);
}
