#include "lists.h"

/**
 * print_listint - this function prints elements of a singly linked list
 *
 * @h: this is the pointer to a list
 *
 * Return: Number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	size_t node_count;

	const listint_t *temp;

	temp = h;

	node_count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		node_count++;
		temp = temp->next;
	}

	return (node_count);
}
