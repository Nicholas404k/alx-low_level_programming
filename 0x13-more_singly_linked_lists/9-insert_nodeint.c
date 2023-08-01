#include "lists.h"
/**
  *insert_nodeint_at_index - function that inserts a new node
  *                        at a given position
  *@head: pointer to pointer to the head of the list
  *@idx: the index of the list where the
  *    new node should be added
  *@n: the value to be stored in the new node
  *Return: the address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int m = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL || idx == 0)
	{
		new->next = *head;
		*head = new;

		return (new);
	}

	current = *head;

	while (current != NULL && m < idx - 1)
	{
		current = current->next;
		m++;
	}

	if (current == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
