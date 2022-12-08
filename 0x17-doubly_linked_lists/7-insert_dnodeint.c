#include "main.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list
 * @idx: position
 * @n: new node
 *
 * Return: address of new node or NULL if failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *run_list = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1)
	{
		if (run_list == NULL)
			return (NULL);
		run_list = run_list->next;
		++i;
	}

	if (run_list->next == NULL)
		return (add_dnodeint_end(h, n));

	new->next = run_list->next;
	run_list->next->prev = new;
	run_list->next = new;
	new->prev = run_list;
	return (new);
}
