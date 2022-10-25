#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index -deletes the node at index of a linked list.
 * @head: douuble pointer to the beginning of a listint_t list
 *@index: index of the node to delete
 *
 * Return: return 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int n = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	temp = *head;
	while (n < index - 1)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		n++;
	}
      next = temp->next;
      temp->next = next->next;
      free(next);
      return (1);
}
