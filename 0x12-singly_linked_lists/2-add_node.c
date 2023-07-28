#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * addi_node - At the beginning of a list_t list, add a new node
 * @head: Double pointer to list_t list.
 * @str: Add new strings to the node.

 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	added_node = malloc(sizeof(list_t));
	if (!added_node)
		return NULL;

	added_node->str = strdup(str);
	if (added_node->str == NULL)
	{
		free(added_node);
		return NULL;
	}

	added_node->len = len;
	added_node->next = (*head);
	(*head) = added_node;

	return (*head);
}
