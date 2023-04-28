#include <stdio.h>
#include "lists.h"

/**
 * print_list - this code  prints all the components of the linked-list
 * @h: point to a list_t list to prt
 *
 * Return: the total of the nodes is printed and returned
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}

