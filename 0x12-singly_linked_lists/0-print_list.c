#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints every  element of a list_t list.
 * @h: This points to list_t list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t nodes_printed = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nodes_printed++;
	}

	return nodes_printed;
}
