#include "lists.h"
/**
  *add_nodeint_end - function that adds a new node
  *                 at the end of a listint_t list
  *@head: the pointer to pointer to the haed node
  *@n: the integer value for the new node
  *Return: address of the new element, or NULL if it fails
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}

	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);

}
