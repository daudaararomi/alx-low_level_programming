#include "main.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_d list
 * @head: list
 * @index: position of node to return
 *
 * Return: address of node at position index, or NULL if failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node_got = head;
	unsigned int i = 0;

	while (node_got != NULL)
	{
		if (i == index)
			return (node_got);
		node_got = node_got->next;
		i++;
	}

	return (NULL);
}
