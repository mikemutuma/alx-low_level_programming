#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the total of components in a linked list
 * @h: points at the list_t list
 *
 * Return: the total of componets in h
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

