#include "lists.h"
/**
  *list_len - function that returns the number elements in linked list
  *@h: the ptr to end of elem.. in the list
  *Return: the number of elements in the list
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
