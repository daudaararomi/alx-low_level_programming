#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index -inserts a new node at a given position.
 * @head: douuble pointer to the beginning of a listint_t list
 *@idx: the index of the list where the new node should be added
 * @n: integer to add to the list
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	current = *head;
	if(idx > 0)
	{
		while (i < idx)
		{
			current = current->next;
			i++;
		}
		if (current == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->n = n;
	new->next = current->next;
	current->next = new;
	return (new);
}
