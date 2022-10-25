#include "lists.h"
#include <stdlib.h>

/**
 *sum_listint -the sum of all the data (n) of a listint_t linked list
 * @head: douuble pointer to the beginning of a listint_t list
  *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 1;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
