#include "lists.h"

/**
 * sum_listint - Calculates the sum of all info in a listint_t list.
 * @head: First node in the linked list.
 *
 * Return: Resulting sum.
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_listint(head->next));
}

