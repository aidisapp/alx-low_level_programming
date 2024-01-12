#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given index in the list
 * @head: pointer to head of the list
 * @idx: index to add at, starting from 0
 * @n: value of new node
 * Return: new node or null
 **/

dlistint_t *insert_dnodeint_at_index(
	dlistint_t **head, unsigned int idx, int n
	)

{
	unsigned int count;
	dlistint_t *tmp, *new, *tmp_prev;

	if (head == NULL && idx > 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
        return (NULL);

    new->n = n, new->prev = new->next = NULL;

    if (idx == 0)
        return (insert_at_beginning(head, new));

    count = 1, tmp = (*head)->next;

    while (tmp)
    {
        if (idx == count)
            return (insert_in_middle(tmp, new));

        count++;
        tmp_prev = tmp;
        tmp = tmp->next;
    }

    if (tmp == NULL && count == idx)
        return (insert_at_end(tmp_prev, new));

    free(new);
    return (NULL);
}

/**
 * insert_at_beginning - inserts a new node at the beginning of the list
 * @head: pointer to head of the list
 * @new: new node to insert
 * Return: new node or null
 **/
dlistint_t *insert_at_beginning(dlistint_t **head, dlistint_t *new)
{
    if (*head)
    {
        new->next = *head;
        (*head)->prev = new;
        *head = new;
    }
    else
        *head = new;

    return (new);
}

/**
 * insert_in_middle - inserts a new node in the middle of the list
 * @tmp: pointer to node after which to insert
 * @new: new node to insert
 * Return: new node or null
 **/
dlistint_t *insert_in_middle(dlistint_t *tmp, dlistint_t *new)
{
    tmp->prev->next = new;
    new->prev = tmp->prev;
    new->next = tmp;
    tmp->prev = new;

    return (new);
}

/**
 * insert_at_end - inserts a new node at the end of the list
 * @tmp_prev: pointer to the last node in the list
 * @new: new node to insert
 * Return: new node or null
 **/
dlistint_t *insert_at_end(dlistint_t *tmp_prev, dlistint_t *new)
{
    tmp_prev->next = new;
    new->prev = tmp_prev;

    return (new);
}

