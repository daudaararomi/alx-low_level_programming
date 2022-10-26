#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listintd -reverses a listint_t linked list.
 * @head: double pointer to the beginning of a listint_t list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if ((*head)->next == NULL)
		return (*head);
	if (head == NULL || *head == NULL)
		return (NULL);
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}