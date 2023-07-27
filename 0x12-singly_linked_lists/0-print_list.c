#include "lists.h"
#include <stdio.h>
/**
  *print_list - function that prints all the elem. of a list_t list
  *@h: the pointer to head of the linked lists
  *Return: the number of nodes in the list
  */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
