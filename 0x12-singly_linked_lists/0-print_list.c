#include "lists.h"

/**
 * print_list - this function iprints all the elements of a list_t list
 *
 * @h: singly linked list
 *
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t my_element;

	my_element = 0;

	for (; h != NULL; h = h->next, my_element++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
	}

	return (my_element);
}
