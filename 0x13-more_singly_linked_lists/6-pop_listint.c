#include "lists.h"
/**
  *pop_listint - function that deletes the head node of a
  *             linked list, and returns the head
  *            node’s data (n)
  *@head: pointer to pointer to the head of node of the
  *      linked list
  *Return: the data of the head node,or 0 if the
  *        linked list is empty
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
