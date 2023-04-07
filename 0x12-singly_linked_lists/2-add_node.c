#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * _strlen - the length of a string
 * @s: string to find the length of
 * Return: size of string
 */

int _strlen(const char *s)
{
	int v;

	v = 0;
	while (s[v] != '\0')
		v++;
	return (v);
}

/**
 * @head: pointer to head of linked list to find the size of
 * @str: string to insert into the node of the linked listd
 * Return: number of elements in list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *pad;

	pad = (malloc(sizeof(list_t)));
	if (!pad)
	{
		free(pad);
		return (NULL);
	}
	if (*head == NULL)
	{
		pad->next = *head;
		pad->str = strdup(str);
		pad->len = _strlen(str);
		*head = pad;
	} else
	{
		pad->next = *head;
		pad->str = strdup(str);
		pad->len = _strlen(str);
		*head = pad;
	}
	return (*head);
}
