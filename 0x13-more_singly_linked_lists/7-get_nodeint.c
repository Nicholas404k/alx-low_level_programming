#include "lists.h"
#include <stdio.h>
/**
  *get_nodeint_at_index - function that returns the nth node of a
  *                      listint_t linked list
  *@head: the pointer to the haed of linked list
  *@index: the index of the node to be returned
  *Return:  pointer to the nth node, or NULL if it doesn't exist
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}
