#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_dog - this is the main block
 *
 * Description: this function frees dog...wow!
 *
 * @d: this is the dog that wants freedom
 *
 * Return: No return statement
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
