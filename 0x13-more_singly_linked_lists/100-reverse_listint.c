#include "lists.h"
/**
  *reverse_listint - function that reverses a
  *                 listint_t linked list
  *@head: pointer to pointer to the head of the list
  *Return: Pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *curr = *head;
	listint_t *next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = previous;
		previous = curr;
		curr = next;
	}

	*head = previous;
	return (*head);
}
