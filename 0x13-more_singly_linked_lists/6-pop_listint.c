#include "lists.h"

/**
 * pop_listint - this function deletes the first element
 *
 * of a singly linked list
 *
 * @head: Pointer to a list
 *
 * Return: Integer if success
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;

	int my_list;

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	my_list = tp->n;
	free(tp);

	return (my_list);
}
