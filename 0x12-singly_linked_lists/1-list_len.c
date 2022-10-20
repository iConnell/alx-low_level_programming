#include <stdio.h>
#include "lists.h"

/**
 * list_len - gets the number of nodes in a linked list
 * @h: singly linked list
 * Return: the number of nodes on the specified list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
