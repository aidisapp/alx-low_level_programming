#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - this is the main block or the Entry point
 *
 * Description: this function allocates memory using malloc
 *
 * @b: the integer concerned
 *
 * Return: does a pointer if passed or
 *
 * should cause normal process termination with a status
 *
 * value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
