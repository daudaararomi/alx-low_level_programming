#include "main.h"

/**
 * sum_dlistint - find the sum of all values in dlistint_t int
 * @head: list
 *
 * Return: sum of data, or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list_sum = head;
	int total = 0;

	while (list_sum != NULL)
	{
		total += list_sum->n;
		list_sum = list_sum->next;
	}

	return (total);
}
