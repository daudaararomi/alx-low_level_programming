#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint -deletes the head node of a listint_t.
 * @head: douuble pointer to the beginning of a listint_t list
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;
	
	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
