#include "lists.h"
#include <stdio.h>

size_t loop_detected_listint_len(const listint_t *head);

/**
  *loop_detected_listint_len - function that counts the
  *                    number of unique nodes in a loop
  *                   detection listint_t linked list
  *@head: pointer to the head of the linked list to check
  *Return: If the list is not looped - 0
  *Otherwise: the number of unique nodes in the list
  *Description: loop detection function
  */

size_t loop_detected_listint_len(const listint_t *head)
{
	const listint_t *next_node;
	const listint_t *curr;
	size_t num = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	next_node = head->next;
	curr = (head->next)->next;

	while (curr)
	{
		if (next_node == curr)
		{
			next_node = head;

			while (next_node != curr)
			{
				num++;
				next_node = (next_node->next);
					      curr = curr->next;
			}

			next_node = next_node->next;

			while (next_node != curr)
			{
			num++;
			next_node = next_node->next;
			}

			return (num);
		}

		next_node = next_node->next;
		curr = (curr->next)->next;
	}

	return (0);
}

/**
  *print_listint_safe - function that prints a
  *                   listint_t list safely
  *@head: A pointer to the head of the listint_t list
  *Return: the number of nodes in the list
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes, ind = 0;

	num_nodes = loop_detected_listint_len(head);

	if (num_nodes == 0)
	{
		for (; head != NULL; num_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ind = 0; ind < num_nodes; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (num_nodes);
}
