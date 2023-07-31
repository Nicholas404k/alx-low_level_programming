#include "lists.h"
#include <stdio.h>
/**
  *free_listint - function that frees a listint_t list
  *@head: the pointer to the head of the list
  *Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
