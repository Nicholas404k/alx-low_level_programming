#include "lists.h"
/**
  *free_listint_safe - function that frees a listint_t list
  *@h: pointer to pointter to the head of the list
  *Return: The size of the list that was freed
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(next);

		if (next >= current)
			break;
		current = next;
	}

	*h = NULL;

	return (count);
}
