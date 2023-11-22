#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - this function frees a listint_t list
 *
 * @head: this is the pointer to the head of the list
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
