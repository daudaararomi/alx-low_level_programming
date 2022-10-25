#include "lists.h"
#include <stdlib.h>

/**
 *get_nodeint_at_index -that returns the nth node of a listint_t linked list
 * @head: douuble pointer to the beginning of a listint_t list
 *
 * Return: nth  node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int n = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL && n < index)
	{
		temp = temp->next;
		n++;
	}
	return (temp);
}
