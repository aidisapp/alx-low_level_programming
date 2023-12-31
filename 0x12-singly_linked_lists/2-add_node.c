#include "lists.h"

/**
 * add_node - this function adds a new node at the beginnning of
 *
 * a linked list
 *
 * @head: this is the double pointer to the list_t list
 *
 * @str: this is the new string to add in the node
 *
 * Return: will be the address of the new element, or NULL if it fails
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

	return (*head);
}
