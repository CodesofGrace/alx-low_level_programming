#include "lists.h"

/**
 * print_listint - Prints all elements in a linked list when run
 * @h: Linked list of type listint_t to print.
 *
 * Return: Number of nodes found.
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
