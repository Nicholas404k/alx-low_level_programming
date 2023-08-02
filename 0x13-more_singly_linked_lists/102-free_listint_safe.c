#include "lists.h"
/**
  *free_listint_safe - function that frees a listint_t list
  *@h: pointer to pointter to the head of the list
  *Return: The size of the list that was freed
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	int diff;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;

		if (diff > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			count++;
		}

		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
