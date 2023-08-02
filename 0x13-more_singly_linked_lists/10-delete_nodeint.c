#include "lists.h"
/**
  *delete_nodeint_at_index - function that deletes the
  *                         node at index index of a
  *                        listint_t linked list
  *@head: pointer to pointer to the haed of the node
  *@index: the index of the node that should be deleted
  *Return: 1 if it succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *previous;
	unsigned int m;

	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;
	previous = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);

		return (1);
	}

	for (m = 0; m < index; m++)
	{
		if (curr->next == NULL)
			return (-1);

		previous = curr;
		curr = curr->next;
	}

	previous->next = curr->next;
	free(curr);

	return (1);
}
