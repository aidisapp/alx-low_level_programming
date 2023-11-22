#include "lists.h"

/**
 * sum_listint - this function calculates the sum of all
 *
 * the data in a listint_t list
 *
 * @head: this is the first node in the linked list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;

	int add;

	temp = head;

	add = 0;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}
