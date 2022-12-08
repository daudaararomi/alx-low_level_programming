#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
