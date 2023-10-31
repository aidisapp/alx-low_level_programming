#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - this is the main block
 *
 * Description: this function creates and array of chars and
 *
 * initializes it with a specific char
 *
 * @size: this is the size of the array
 *
 * @c: the declare character
 *
 * Return: if the size is 0, it is NULL
 *
 * if it fails, it returns NULL or if not,
 *
 * it returns a pointer to the array if it passes
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int v;

	arr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (v = 0; v < size; v++)
	{
		arr[v] = c;
	}

	return (arr);
}
