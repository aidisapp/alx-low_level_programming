#include "lists.h"

/**
 * free_list - this fucntion frees a list_t list
 *
 * @head: this is the pointer to the head of the linked list
 */

void free_list(list_t *head)
{
	list_t *present;

	for (present = head; present != NULL;)
	{
		list_t *temp;

		temp = present;

		present = present->next;

		free(temp->str);
		free(temp);
	}
}
