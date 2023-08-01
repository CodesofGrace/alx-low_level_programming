#include "lists.h"

/**
 * listint_len - when run, return the number of documents in a linked list
 * @h: Linked list of type listint_t to traverse.
 *
 * Return: Number of nodes found
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
