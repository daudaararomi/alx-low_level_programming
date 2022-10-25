#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeintadd -adds a new node at the end of a listint_t list.
 * @head: douuble pointer to the beginning of a listint_t list
 * @n: integer to add to the list
 *
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t last;

       	if (head == NULL)
	{
		*head = new
		return (head);
	}
	last = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (last->next != NULL)
		last = last->next;
	last->new = new;
	return (new);
}
