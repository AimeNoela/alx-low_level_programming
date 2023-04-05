#include "lists.h"
#include <stdio.h>

/**
 * print_list -  prints all the elements of a list_t list
 * @h: the list_t lis considered
 *
 * Return: the number of nodes available in h
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	for (; h; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
	}
	return (nodes);
}
