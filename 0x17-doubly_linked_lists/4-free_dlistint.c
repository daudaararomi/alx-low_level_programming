#include "main.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: list to free
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_dlinked = head;

	while (free_dlinked != NULL)
	{
		free_dlinked = free_dlinked->next;
		free(head);
		head = free_dlinked;
	}
}
