#include "lists.h"
/**
  *free_listint2 - function that frees a listint_t list
  *@head: the double pointer to the head of list
  *Description: This function frees each node of a
  *         linked list and sets the head pointer to NULL
  */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}
}
