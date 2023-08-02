#include "lists.h"
#include <stdio.h>
/**
  *print_listint_safe - function that prints a
  *                    listint_t linked list
  *@head: pointer to the head of the linked list
  *Return: The number of nodes in the list
  */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *next_node;
	const listint_t *curr = head;
	size_t num = 0;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		num++;

		next_node = curr->next;

		if (next_node >= curr)
		{
			printf("-> [%p] %d\n", (void *)next_node, next_node->n);

			exit(98);
		}

		curr = next_node;
	}

	return (num);
}
