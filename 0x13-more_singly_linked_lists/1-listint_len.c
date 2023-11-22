#include "lists.h"

/**
 * listint_len - this function returns the number of
 *
 * elements in a linked listint_t list
 *
 * @h: this is the pointer to the head of the list
 *
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count;

	const listint_t *temp;

	node_count = 0;

	temp = h;

	while (temp != NULL)
	{
		node_count++;
		temp = temp->next;
	}

	return (node_count);
}
