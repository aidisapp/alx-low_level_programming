#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - this function searches for an integer in an array
 *
 * @array: this is pointer to the array
 *
 * @size: this is the number of elements in the array
 *
 * @cmp: this is the pointer to the function to compare values
 *
 * Return: index of the first element for
 *
 * which cmp doesn't return 0, or -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (!(array == NULL || cmp == NULL))
	{
		int b;

		for (b = 0; b < size; b++)
		{
			if (cmp(array[b]) != 0)
			{
				return (b);
			}
		}
	}

	return (-1);
}
