#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int leng = 0;
	list_t *current_node;
	list_t *new_node = *head;

	while (str[leng])
		leng++;

	current_node = malloc(sizeof(list_t));

	if (current_node == NULL)
		return (NULL);

	current_node->str = strdup(str);
	current_node->len = leng;
	current_node->next = NULL;

	if (*head == NULL)
	{
		*head = current_node;
		return (current_node);
	}

	while (new_node->next)
		new_node = new_node->next;
	new_node->next = current_node;

	return (current_node);
}
