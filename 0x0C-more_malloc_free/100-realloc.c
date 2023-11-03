#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - this is the main block
 *
 * Description: this function reallocates a memory block using malloc and free
 *
 * @ptr: this represents my pointer
 *
 * @old_size: old size
 *
 * @new_size: new size
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *myown, *alloc;
	unsigned int i;

	if (ptr != NULL)
	myown = ptr;

	else
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	alloc = malloc(new_size);

	if (alloc == NULL)
	return (0);

	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(alloc + i) = myown[i];
	}

	free(ptr);
	return (alloc);
}
