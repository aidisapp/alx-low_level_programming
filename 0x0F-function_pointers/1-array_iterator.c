#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - this function executes a function
 *
 * given as a parameter on an element of an array
 *
 * @size: this is known as the size of the array
 *
 * @action: this is known also as the pointer to the function
 *
 * @array: the pointer to the int
 *
 * Return: this will be nothing for the time being
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL || action != NULL)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
