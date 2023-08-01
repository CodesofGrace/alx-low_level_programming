#include "lists.h"

/**
 * print_listint - All document in a linked list is to be printed
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes found
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL) {
		return 0;
	}

	printf("%d\n", h->n);
	return 1 + print_listint(h->next);
}
