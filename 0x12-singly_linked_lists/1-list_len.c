#include "lists.h"

/**
 * list_len - this function will return or count the number of elements
 *
 * @h: this is the singly linked list
 *
 * Return: this iwll be the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t number;

	number = 0;

	for (; h != NULL; h = h->next)
	{
		number++;
	}

	return (number);
}
