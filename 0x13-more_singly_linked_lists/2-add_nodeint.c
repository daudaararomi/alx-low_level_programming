#include "list.h"
#include <stdio.h>
/**
 *add_nodeint - adds a new node at the beginning of a listint_t list.
 *@head:  pointer to pointer head of the list
 *@n: data to put in he address of the new element, or NULL if it failed
 *
 *Return: the number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t = new_listint_t;

	if (head == NULL)
		return (NULL);
	new_listint_t = (listint_t*)malloc(sizeof(listint_t));
	if (new_listint_t = NULL)
		return (NULL);
	new_listint_t->n = n;
	new_listint_t->next = (*head);
	(*head) = new_listint_t;
	return ((*head));
}
