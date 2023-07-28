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
	list_t *the_new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	the_new_node = malloc(sizeof(list_t));

	if (the_new_node == NULL)
		return (NULL);

	the_new_node->str = strdup(str);

	if (the_new_node->str == NULL)
	{
		free(the_new_node);
		return (NULL);
	}

	the_new_node->len = strlen(str);
	the_new_node->next = *head;
	*head = the_new_node;

	return (the_new_node);
}
