#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -that frees a listint_t list.
 * @head: douuble pointer to the beginning of a listint_t list
  *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
