#include "lists.h"
/**
  *add_node - funtion that adds a new node at the beginning
  *           of list_t list
  *@head: the ptr to the head of the list
  *@str: str to be duplicated and stored in the new node
  *Return: addresses of the new elements or NULL on failure
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
